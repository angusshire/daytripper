nrf24_getStatus

    // HAL_Delay(500);
    // printf("hello world\n");
HAL_Delay(500);
    printf("%d\n", nrf24_getStatus());
    HAL_GPIO_TogglePin(USER_LED_GPIO_Port, USER_LED_Pin);


nrf24_init();
  nrf24_config(2,4);
  nrf24_tx_address(tx_address);
  nrf24_rx_address(rx_address);

    if(nrf24_dataReady())
    {
        nrf24_getData(data_array);        
        printf("> ");
        printf("%2X ",data_array[0]);
        printf("%2X ",data_array[1]);
        printf("%2X ",data_array[2]);
        printf("%2X\r\n",data_array[3]);
    }
    HAL_GPIO_TogglePin(USER_LED_GPIO_Port, USER_LED_Pin);
  