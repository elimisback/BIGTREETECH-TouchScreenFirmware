#ifndef _LANGUAGE_BR_H_
#define _LANGUAGE_BR_H_

    // config.ini Parameter Settings - Screen Settings and Feature Settings
    #define STRING_EMULATED_M600          "M600 emulado"
    #define STRING_EMULATED_M109_M190     "M109 / M190 emulado"
    #define STRING_EVENT_LED              "Event LED"
    #define STRING_FILE_COMMENT_PARSING   "Análise de comentários em arquivos"
    #define STRING_ROTATED_UI             "Girar"
    #define STRING_LANGUAGE               "Português BRASIL"
    #define STRING_ACK_NOTIFICATION       "Tipo de pop-up"
    #define STRING_FILES_SORT_BY          "Lista arqui. por"
    #define STRING_FILES_LIST_MODE        "Arquivo em modo de lista"
    #define STRING_FILENAME_EXTENSION     "Mostra ext. dos arquivos"
    #define STRING_FAN_SPEED_PERCENTAGE   "FAN em porcentagem"
    #define STRING_PERSISTENT_INFO        "Mostra barra de status"
    #define STRING_TERMINAL_ACK           "Mostra ACK no console"
    #define STRING_SERIAL_ALWAYS_ON       "Serial sempre ligada"
    #define STRING_MARLIN_FULLSCREEN      "Marlin Tela Cheia"
    #define STRING_MARLIN_SHOW_TITLE      "Mostra título em Marlin"
    #define STRING_MARLIN_TYPE            "Modo Marlin"
    #define STRING_MOVE_SPEED             "Velocidade (X Y Z)"
    #define STRING_AUTO_LOAD_LEVELING     "Auto salva/carrega Nivel."
    #define STRING_PROBING_Z_OFFSET       "Offset Z"
    #define STRING_Z_STEPPERS_ALIGNMENT   "Auto Alinhamento do eixo Z"
    #define STRING_PS_AUTO_SHUTDOWN       "Desliga automático"
    #define STRING_FIL_RUNOUT             "Sensor de filamento"
    #define STRING_PL_RECOVERY            "Recuperação de queda de energia"
    #define STRING_PL_RECOVERY_HOME       "Home após queda de energia"
    #define STRING_BTT_MINI_UPS           "Suporte para BTT UPS"
    #define STRING_TOUCH_SOUND            "Som de toque"
    #define STRING_TOAST_SOUND            "Notificações do sistema"
    #define STRING_ALERT_SOUND            "Popups e avisos"
    #define STRING_HEATER_SOUND           "Notificar temperatura"
    #define STRING_LCD_BRIGHTNESS         "Brilho"
    #define STRING_LCD_IDLE_BRIGHTNESS    "Brilho em descanso"
    #define STRING_LCD_IDLE_TIME          "Timer do brilho"
    #define STRING_LCD_LOCK_ON_IDLE       "Bloq. LCD em IDLE"
    #define STRING_LED_ALWAYS_ON          "LED always ON"
    #define STRING_KNOB_LED_COLOR         "Knob LED"
    #define STRING_KNOB_LED_IDLE          "Knob LED IDLE"
    #define STRING_START_GCODE_ENABLED    "Gcode antes imp."
    #define STRING_END_GCODE_ENABLED      "Gcode pós impressão"
    #define STRING_CANCEL_GCODE_ENABLED   "Gcode de cancelamento"

    // Machine Parameter Settings - Param Title (ordered by gcode)
    #define STRING_STEPS_SETTING          "Passos por mm"
    #define STRING_FILAMENT_SETTING       "Diâmetro do filamento"
    #define STRING_MAXACCELERATION        "Aceleração máxima"
    #define STRING_MAXFEEDRATE            "Avanço máximo"
    #define STRING_ACCELERATION           "Aceleração"
    #define STRING_JERK                   "Jerk"
    #define STRING_JUNCTION_DEVIATION     "Desvio de junção"
    #define STRING_HOME_OFFSET            "Deslocamento inicial"
    #define STRING_FWRETRACT              "Retração de firmware"
    #define STRING_FWRECOVER              "Firmware retraction rec." // TRADUZIR
    #define STRING_RETRACT_AUTO           "Retração de Firmware Auto."
    #define STRING_HOTEND_OFFSET          "Offset de acordo com hotend" //
    #define STRING_STEALTH_CHOP           "TMC StealthChop"
    #define STRING_DELTA_CONFIGURATION    "Configuração Delta"
    #define STRING_DELTA_TOWER_ANGLE      "Guarnição do ângulo da torre" //
    #define STRING_DELTA_DIAGONAL_ROD     "Diagonal Rod Trim"
    #define STRING_DELTA_ENDSTOP          "Ajustes de fim de curso"
    #define STRING_PROBE_OFFSET           "OFFSET da Sonda"
    #define STRING_LIN_ADVANCE            "Avanço linear"
    #define STRING_CURRENT_SETTING        "Corrente do driver (mA)"
    #define STRING_HYBRID_THRESHOLD       "HYBRID_THRESHOLD" //
    #define STRING_BUMP_SENSITIVITY       "Sensibilidade sensorless homing" //
    #define STRING_MBL_OFFSET             "MBL Offset" //

    // Machine Parameter Settings - Param Attributes (ordered by gcode)
    #define STRING_PRINT_ACCELERATION     "Aceleração na impressão"
    #define STRING_RETRACT_ACCELERATION   "Aceleração na Retração"
    #define STRING_TRAVEL_ACCELERATION    "Aceleração TRAVEL"
    #define STRING_RETRACT_LENGTH         "Comprimento de retração"
    #define STRING_RETRACT_SWAP_LENGTH    "Exchange retr. comprimento"//
    #define STRING_RETRACT_FEEDRATE       "Taxa de avanço de retração"
    #define STRING_RETRACT_Z_LIFT         "Levantar Z na retração"
    #define STRING_RECOVER_LENGTH         "Avanço Extra de retração"//
    #define STRING_SWAP_RECOVER_LENGTH    "Comprimento extra de recuperação de troca"
    #define STRING_RECOVER_FEEDRATE       "Avanço de recuperação"
    #define STRING_SWAP_RECOVER_FEEDRATE  "Exchange Rec.feedrate"

    // Save / Load
    #define STRING_SAVE                   "Salvar"
    #define STRING_RESTORE                "Restaurar"
    #define STRING_RESET                  "Resetar"
    #define STRING_EEPROM_SAVE_INFO       "Salva config. na EEPROM?"
    #define STRING_EEPROM_RESTORE_INFO    "Restaura config. da EEPROM?"
    #define STRING_EEPROM_RESET_INFO      "Reseta a EEPROM para padrão?"
    #define STRING_SETTINGS_SAVE          "Salvar configurações"
    #define STRING_SETTINGS_RESTORE       "Restaurar configurações"
    #define STRING_SETTINGS_RESET         "Redefinir configurações"
    #define STRING_SETTINGS_RESET_INFO    "Redefinir todas as configurações p/ padrão?"
    #define STRING_SETTINGS_RESET_DONE    "Configurações Redefinidas com sucesso. \ nReinicie a impressora."

    // Navigation Buttons
    #define STRING_PAGE_UP                "Retorna"
    #define STRING_PAGE_DOWN              "Avança"
    #define STRING_UP                     "Sobe"
    #define STRING_DOWN                   "Desce"
    #define STRING_NEXT                   "Próximo"
    #define STRING_BACK                   "Voltar"

    // Value Buttons
    #define STRING_INC                    "Incrementa"
    #define STRING_DEC                    "Diminui"
    #define STRING_LOAD                   "Carrega"
    #define STRING_UNLOAD                 "Descarrega"
    #define STRING_ON                     "Ligado"
    #define STRING_OFF                    "Desligado"
    #define STRING_AUTO                   "AUTO"
    #define STRING_SMART                  "SMART"
    #define STRING_SLOW                   "Lento"
    #define STRING_NORMAL                 "Normal"
    #define STRING_FAST                   "Rápido"
    #define STRING_ZERO                   "Zero"
    #define STRING_HALF                   "50%"
    #define STRING_FULL                   "100%"
    #define STRING_CUSTOM                 "Custom."
    #define STRING_CLEAR                  "Cancel."
    #define STRING_DEFAULT                "Padrão"

    // Action Buttons
    #define STRING_START                  "Iniciar"
    #define STRING_STOP                   "Para"
    #define STRING_PAUSE                  "Pausa"
    #define STRING_RESUME                 "Resume"
    #define STRING_INIT                   "Init"
    #define STRING_DISCONNECT             "Desconectar"
    #define STRING_SHUT_DOWN              "Desligar"
    #define STRING_FORCE_SHUT_DOWN        "Força desligamento"
    #define STRING_EMERGENCYSTOP          "Emergência"
    #define STRING_PREHEAT                "Pré-aquece"
    #define STRING_PREHEAT_BOTH           "Ambos"
    #define STRING_COOLDOWN               "Esfria"

    // Dialog Buttons
    #define STRING_CONFIRM                "Confirma"
    #define STRING_CANCEL                 "Cancela"
    #define STRING_WARNING                "Aviso"
    #define STRING_CONTINUE               "Continua"
    #define STRING_CONFIRMATION           "Tem certeza?"

    // Process Status
    #define STRING_STATUS                 "Status"
    #define STRING_READY                  "Pronto"
    #define STRING_BUSY                   "Impressora ocupada, aguarde ..."
    #define STRING_LOADING                "Carregando ..."
    #define STRING_UNCONNECTED            "Impressora não conectada"
    #define STRING_LISTENING              "TFT em modo de escuta!"

    // Process Info
    #define STRING_INFO                   "Informações"
    #define STRING_INVALID_VALUE          "Valores inválidos!"
    #define STRING_TIMEOUT_REACHED        "Timeout atingido!"
    #define STRING_DISCONNECT_INFO        "Você pode controlar a impressora de seu PC!"
    #define STRING_SHUTTING_DOWN          "Desligar ..."
    #define STRING_WAIT_TEMP_SHUT_DOWN    "Espere que a temperatura do hotend seja inferior a %d℃"
    #define STRING_POWER_FAILED           "Continuar imprimindo?"
    #define STRING_PROCESS_RUNNING        "Processo em andamento! Aguarde a conclusão"
    #define STRING_PROCESS_COMPLETED      "Processo concluído!"
    #define STRING_PROCESS_ABORTED        "Processo cancelado!"

    // TFT SD, USB Disk, Onboard SD, Filament Runout Process Commands / Status / Info
    #define STRING_TFTSD                  "SD TFT"
    #define STRING_READ_TFTSD_ERROR       "Erro de leitura do SD!"
    #define STRING_TFTSD_INSERTED         "SD inserido"
    #define STRING_TFTSD_REMOVED          "SD removido"
    #define STRING_TFTSD_NOT_DETECTED     "SD não detectado"
    #define STRING_USB_DISK               "Pen drive"
    #define STRING_READ_USB_DISK_ERROR    "Erro de leitura do Pen Drive"
    #define STRING_USB_DISK_INSERTED      "Pen Drive inserido!"
    #define STRING_USB_DISK_REMOVED       "Pen Drive removido!"
    #define STRING_USB_DISK_NOT_DETECTED  "USB Disk não detectado"
    #define STRING_ONBOARDSD              "SD ONBOARD"
    #define STRING_ONBOARDUSB             "USB ONBOARD"
    #define STRING_READ_ONBOARDSD_ERROR   "Erro de leitura do onboard media!"
    #define STRING_FILAMENT_RUNOUT        "Filamento acabou!"

    // Steppers, Print, Probe Process Commands / Status / Info
    #define STRING_DISABLE_STEPPERS       "Des. Motor"
    #define STRING_XY_UNLOCK              "Desliga XY"

    #define STRING_START_PRINT            "Inicia impressão:\n%s?"
    #define STRING_STOP_PRINT             "Para impressão?"
    #define STRING_IS_PAUSE               "Ação não permitida durante a impressão,\n\nPausa impressão?"
    #define STRING_M0_PAUSE               "Pausado pelo comando M0"

    #define STRING_TEST                   "Teste"
    #define STRING_DEPLOY                 "Lança"
    #define STRING_STOW                   "Retrai"
    #define STRING_REPEAT                 "Repete"
    #define STRING_HS_ON                  "HS: On"
    #define STRING_HS_OFF                 "HS: Off"

    // Printer Tools
    #define STRING_NOZZLE                 "Hotend"
    #define STRING_BED                    "Mesa"
    #define STRING_CHAMBER                "Chamber"
    #define STRING_FAN                    "Fan"

    #define STRING_BLTOUCH                "BLTouch"
    #define STRING_TOUCHMI                "TouchMi"

    // Values
    #define STRING_1_DEGREE               "1℃"
    #define STRING_5_DEGREE               "5℃"
    #define STRING_10_DEGREE              "10℃"

    #define STRING_001_MM                 "0.01mm"
    #define STRING_01_MM                  "0.1mm"
    #define STRING_1_MM                   "1mm"
    #define STRING_5_MM                   "5mm"
    #define STRING_10_MM                  "10mm"
    #define STRING_100_MM                 "100mm"
    #define STRING_200_MM                 "200mm"

    #define STRING_1_PERCENT              "1%"
    #define STRING_5_PERCENT              "5%"
    #define STRING_10_PERCENT             "10%"
    #define STRING_PERCENT_VALUE          "%d%%"

    #define STRING_5_SECONDS              "5 seg."
    #define STRING_10_SECONDS             "10 seg."
    #define STRING_30_SECONDS             "30 seg."
    #define STRING_60_SECONDS             "1 min."
    #define STRING_120_SECONDS            "2 min."
    #define STRING_300_SECONDS            "5 min."

    // Colors
    #define STRING_WHITE                  "Branco"
    #define STRING_BLACK                  "Preto"
    #define STRING_BLUE                   "Azul"
    #define STRING_RED                    "Vermelho"
    #define STRING_GREEN                  "Verde"
    #define STRING_CYAN                   "Ciano"
    #define STRING_YELLOW                 "Amarelo"
    #define STRING_BROWN                  "Marrom"
    #define STRING_GRAY                   "Cinza"
    #define STRING_ORANGE                 "Laranja"
    #define STRING_INDIGO                 "Indigo"
    #define STRING_VIOLET                 "Roxo"
    #define STRING_MAGENTA                "Magenta"
    #define STRING_PURPLE                 "Roxo"
    #define STRING_LIME                   "Lima"
    #define STRING_DARKBLUE               "Azul Escuro"
    #define STRING_DARKGREEN              "Verde Escuro"
    #define STRING_DARKGRAY               "Cinza Escuro"

    // Menus
    #define STRING_HEAT                   "Aquece"
    #define STRING_MOVE                   "Mover"
    #define STRING_HOME                   "Home"
    #define STRING_PRINT                  "Imprimir"
    #define STRING_EXTRUDE                "Extrusão"
    #define STRING_SETTINGS               "Configs."
    #define STRING_SCREEN_SETTINGS        "Tela"
    #define STRING_UI_SETTINGS            "UI"
    #define STRING_SOUND                  "Som"
    #define STRING_MARLIN_MODE_SETTINGS   "MarlinMode"
    #define STRING_MACHINE_SETTINGS       "Impressora"
    #define STRING_PARAMETER_SETTINGS     "Parâmetros"
    #define STRING_FEATURE_SETTINGS       "Config."
    #define STRING_CONNECTION_SETTINGS    "Conexões"
    #define STRING_SERIAL_PORTS           "Porta S."
    #define STRING_BAUDRATE               "Baudrate"
    #define STRING_EEPROM_SETTINGS        "EEPROM"
    #define STRING_RGB_SETTINGS           "Cor LED"
    #define STRING_RGB_OFF                "Des. LED"
    #define STRING_TERMINAL               "Console"
    #define STRING_LEVELING               "Calibrar"
    #define STRING_POINT_1                "Ponto 1"
    #define STRING_POINT_2                "Ponto 2"
    #define STRING_POINT_3                "Ponto 3"
    #define STRING_POINT_4                "Ponto 4"
    #define STRING_POINT_5                "Ponto 5"
    #define STRING_BED_LEVELING           "ABL"
    #define STRING_BL_COMPLETE            "Nivelamento automático concluído"
    #define STRING_BL_SMART_FILL          "Alguns pontos ausentes. Malha reconstruída com função inteligente.\n\nNota:Lembre-se de salvar!"// PONTOS DO ABL AUSENTES ?
    #define STRING_BL_ENABLE              "ABL: On"
    #define STRING_BL_DISABLE             "ABL: Off"
    #define STRING_ABL                    "ABL"
    #define STRING_BBL                    "BBL"
    #define STRING_UBL                    "UBL"
    #define STRING_MBL                    "MBL"
    #define STRING_MBL_SETTINGS           "Nivelamento da malha da mesa"
    #define STRING_ABL_SETTINGS           "Nivelamento automático da mesa"
    #define STRING_ABL_SETTINGS_BBL       "Bilinear ABL"
    #define STRING_ABL_SETTINGS_UBL       "ABL unificado"
    #define STRING_ABL_SETTINGS_UBL_SAVE  "Salvar no slot"
    #define STRING_ABL_SETTINGS_UBL_LOAD  "Carregar do slot"
    #define STRING_ABL_SLOT0              "Slot 0"
    #define STRING_ABL_SLOT1              "Slot 1"
    #define STRING_ABL_SLOT2              "Slot 2"
    #define STRING_ABL_SLOT3              "Slot 3"
    #define STRING_ABL_SLOT_EEPROM        "Salva MESH na EEPROM para ler após inicialização?"
    #define STRING_ABL_Z                  "Z Fade"
    #define STRING_LEVEL_CORNER           "Cantos"
    #define STRING_P_OFFSET               "P Offset"
    #define STRING_H_OFFSET               "H Offset"
    #define STRING_DISTANCE               "Distância"
    #define STRING_LOAD_UNLOAD            "Carrega/Descarrega"
    #define STRING_LOAD_UNLOAD_SHORT      "Filamento"
    #define STRING_TOUCHSCREEN_ADJUST     "Cal. Touch"
    #define STRING_MORE                   "Mais"
    #define STRING_SCREEN_INFO            "Info. MEM."
    #define STRING_BG_COLOR               "Cor de fundo"
    #define STRING_FONT_COLOR             "Cor da fonte"
    #define STRING_PERCENTAGE             "Porcentagem"
    #define STRING_PERCENTAGE_SPEED       "Velo."
    #define STRING_PERCENTAGE_FLOW        "Fluxo"
    #define STRING_BABYSTEP               "Babystep"
    #define STRING_X_INC                  "X+"
    #define STRING_Y_INC                  "Y+"
    #define STRING_Z_INC                  "Z+"
    #define STRING_X_DEC                  "X-"
    #define STRING_Y_DEC                  "Y-"
    #define STRING_Z_DEC                  "Z-"
    #define STRING_X                      "X"
    #define STRING_Y                      "Y"
    #define STRING_Z                      "Z"
    #define STRING_ADJUST_TITLE           "Calibragem Touch Screen"
    #define STRING_ADJUST_INFO            "Pressione nos pontos vermelhos"
    #define STRING_ADJUST_OK              "Ajuste concluído!"
    #define STRING_ADJUST_FAILED          "O ajuste falhou. Tente novamente!"
    #define STRING_UNIFIEDMOVE            "Movimento"
    #define STRING_UNIFIEDHEAT            "TEMP/FAN"
    #define STRING_TOUCH_TO_EXIT          "Toque p/ sair"
    #define STRING_MAINMENU               "Menu"
    #define STRING_LEVELING_EDGE_DISTANCE "Distância da borda"
    #define STRING_TUNING                 "Ajuste"// TRADUZIR MELHOR
    #define STRING_PID                    "PID"
    #define STRING_PID_TITLE              "Auto Ajuste do PID"
    #define STRING_PID_START_INFO         "O Auto Ajuste do PID começará. Isso pode demorar. \nContinua?"
    #define STRING_PID_START_INFO_2       "Autoajuste do PID em andamento!"
    #define STRING_PID_START_INFO_3       "NÃO TOQUE na tela até completar!"
    #define STRING_TUNE_EXTRUDER          "Passos/mm E"
    #define STRING_TUNE_EXT_EXTRUDE_100   "Extr. 100mm"
    #define STRING_TUNE_EXT_TEMP          "Extr. ajuste | Aquece"
    #define STRING_TUNE_EXT_MARK120MM     "Marque o filamento em 120mm \nPressione '%s' quando estiver pronto \nMeça o comprimento marcado após a extrusão"
    #define STRING_TUNE_EXT_HEATOFF       "Desliguar o Hotend?"
    #define STRING_TUNE_EXT_ADJ_ESTEPS    "Ajustar passos/mm E"
    #define STRING_TUNE_EXT_ESTEPS_SAVED  "Novos passos/mm E definidos\nNão se esqueça de salvar na EEPROM\nNovo valor: %0.2f"
    #define STRING_TUNE_EXT_MEASURED      "Comprimento restante:"
    #define STRING_TUNE_EXT_OLD_ESTEP     "Passos/mm E: %0.2f"
    #define STRING_TUNE_EXT_NEW_ESTEP     "Novos passos/mm E: %0.2f"
    #define STRING_NOTIFICATIONS          "Notificações"
    #define STRING_MESH_EDITOR            "Edita Malha"
    #define STRING_MESH_TUNER             "Ajuste Malha"
    #define STRING_CASE_LIGHT             "Luzes Gabinete"
    #define STRING_LOAD_STARTED           "Carregando filamento... \nAguarde até terminar."
    #define STRING_UNLOAD_STARTED         "Descarregando filamento... \nAguarde até terminar."
    #define STRING_HEATERS_ON             "Alguns aquecedores ainda estão ligados \nDeseja desligá-los?"
    #define STRING_PRINT_FINISHED         "Impressão concluída."
    #define STRING_MAIN_SCREEN            "Menu"
    #define STRING_PREVIOUS_PRINT_DATA    "Última impressão"
    #define STRING_PRINT_TIME             "Tempo de impressão: %02u:%02u:%02u"
    #define STRING_FILAMENT_LENGTH        "\nTamanho do filamento: %1.2fm"
    #define STRING_FILAMENT_WEIGHT        "\nPeso do filamento: %1.2fg"
    #define STRING_FILAMENT_COST          "\nCusto do filamento: %1.2f"
    #define STRING_NO_FILAMENT_STATS      "\nSem estatística de filamento."
    #define STRING_CLICK_FOR_MORE         "Clique p/ resumo"
    #define STRING_EXT_TEMPLOW            "A temperatura HOTEND está abaixo da temperatura mínima (%d℃)."
    #define STRING_HEAT_HOTEND            "Aquecer HOTEND para %d℃"
    #define STRING_DESIRED_TEMPLOW        "Temperatura do HOTEND está abaixo da temperatura programada (%d℃)."
    #define STRING_WAIT_HEAT_UP           "Aguardando aquecer."
    #define STRING_Z_ALIGN                "Alinhar Z"
    #define STRING_MACROS                 "Macros"
    #define STRING_MESH_VALID             "Validação de malha"
    #define STRING_CONNECT_PROBE          "Abaixe a sonda antes de iniciar o ajuste. Levante após terminar."
    #define STRING_DISCONNECT_PROBE       "Certifique-se de que a sonda esteja levantada antes de usar este recurso."
    #define STRING_CALIBRATION            "Calibrar"

#endif
