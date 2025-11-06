#include "adc.h"

ADC_Value_t adc_value={0};

void TaskAdc(void *pvParameters)
{
	while(1)
	{
		adc_value.temp1=(float)adc_value.adcValues[0];
		adc_value.temp2=(float)adc_value.adcValues[1];
		vTaskDelay(pdMS_TO_TICKS(1000));
	}
}