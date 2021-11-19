#include <stdio.h>
#include"esp_log.h"

void app_main(void)
{
  printf("ys hello world\n");

  ESP_LOGE("LOG", "This is an error");
}
