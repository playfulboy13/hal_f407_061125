#include "main.h"

void Task1(void *pvParameters)
{
	char buffer[64];
	
	while(1)
	{
		snprintf(buffer,sizeof(buffer),"ADC1:%04d,ADC2:%04d!\r\n",adc_value.adcValues[0],adc_value.adcValues[1]);
		HAL_GPIO_TogglePin(LED1_GPIO_Port,LED1_Pin);
		CDC_Transmit_FS(buffer,strlen(buffer));
		vTaskDelay(pdMS_TO_TICKS(1000));
	}
}