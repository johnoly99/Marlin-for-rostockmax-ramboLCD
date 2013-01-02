#ifndef LANGUAGE_H
#define LANGUAGE_H

// NOTE: IF YOU CHANGE THIS FILE / MERGE THIS FILE WITH CHANGES
//
//   ==> ALWAYS TRY TO COMPILE MARLIN WITH/WITHOUT "ULTIPANEL" / "ULTRALCD" / "SDSUPPORT" #define IN "Configuration.h" 
//   ==> ALSO TRY ALL AVAILABLE "LANGUAGE_CHOICE" OPTIONS

// Languages
// 1  English
// 2  -
// 3  French	(Waiting translation)
// 4  German
// 5  Spanish
// 6  Etc

#define LANGUAGE_CHOICE 1  // Pick your language from the list above

#define PROTOCOL_VERSION "1.0"

#if MOTHERBOARD == 7 || MOTHERBOARD == 71
	#define MACHINE_NAME "Ultimaker"
	#define FIRMWARE_URL "http://firmware.ultimaker.com"
#else
	#define MACHINE_NAME "RostockMAX"
	#define FIRMWARE_URL "https://github.com/johnoly99/Marlin-for-rostockmax-rambo"
#endif

#define STRINGIFY_(n) #n
#define STRINGIFY(n) STRINGIFY_(n)

#if LANGUAGE_CHOICE == 1

// LCD Menu Messages
	#define WELCOME_MSG MACHINE_NAME " Ready."
	#define MSG_SD_INSERTED "RostockMAX SD Ready"
	#define MSG_SD_REMOVED "RostockMAX No SD"
	#define MSG_MAIN " Main \003"
	#define MSG_AUTOSTART " Autostart"
	#define MSG_DISABLE_STEPPERS " Disable Steppers"
	#define MSG_AUTO_HOME " Home Axes "
	#define MSG_SET_ORIGIN " Set As Origin"
	#define MSG_PREHEAT_PLA " Preheat PLA"
	#define MSG_PREHEAT_PLA_SETTINGS " Preheat PLA Setting"
	#define MSG_PREHEAT_ABS " Preheat ABS"
	#define MSG_PREHEAT_ABS_SETTINGS " Preheat ABS Setting"
	#define MSG_COOLDOWN " Cooldown"
	#define MSG_EXTRUDE " Extrude"
	#define MSG_RETRACT " Retract"
	#define MSG_PREHEAT_PLA " Preheat PLA"
	#define MSG_PREHEAT_ABS " Preheat ABS"
	#define MSG_MOVE_AXIS " Move Axis      \x7E"
	#define MSG_SPEED " Speed:"
	#define MSG_NOZZLE " \002Nozzle:"
	#define MSG_NOZZLE1 " \002Nozzle2:"
	#define MSG_NOZZLE2 " \002Nozzle3:"
	#define MSG_BED " \002Bed:"
	#define MSG_FAN_SPEED " Fan speed:"
	#define MSG_FLOW " Flow:"
	#define MSG_CONTROL " Control \003"
	#define MSG_MIN " \002 Min:"
	#define MSG_MAX " \002 Max:"
	#define MSG_FACTOR " \002 Fact:"
	#define MSG_AUTOTEMP " Autotemp:"
	#define MSG_ON "On "
	#define MSG_OFF "Off"
	#define MSG_PID_P " PID-P: "
	#define MSG_PID_I " PID-I: "
	#define MSG_PID_D " PID-D: "
	#define MSG_PID_C " PID-C: "
	#define MSG_ACC  " Acc:"
	#define MSG_VXY_JERK " Vxy-jerk: "
	#define MSG_VMAX " Vmax "
	#define MSG_X "x:"
	#define MSG_Y "y:"
	#define MSG_Z "z:"
	#define MSG_E "e:"
	#define MSG_VMIN " Vmin:"
	#define MSG_VTRAV_MIN " VTrav min:"
	#define MSG_AMAX " Amax "
	#define MSG_A_RETRACT " A-retract:"
	#define MSG_XSTEPS " Xsteps/mm:"
	#define MSG_YSTEPS " Ysteps/mm:"
	#define MSG_ZSTEPS " Zsteps/mm:"
	#define MSG_ESTEPS " Esteps/mm:"
	#define MSG_MAIN_WIDE " Main        \003"
	#define MSG_RECTRACT_WIDE " Rectract    \x7E"
	#define MSG_TEMPERATURE_WIDE " Temperature \x7E"
	#define MSG_TEMPERATURE_RTN " Temperature  \003"
	#define MSG_MOTION_WIDE " Motion      \x7E"
	#define MSG_STORE_EPROM " Store to memory"
	#define MSG_LOAD_EPROM " Load from memory"
	#define MSG_RESTORE_FAILSAFE " Restore Defaults"
	#define MSG_REFRESH "\004Refresh"
	#define MSG_WATCH " Home Screen   \003"
	#define MSG_PREPARE " Manual Control \x7E"
	#define MSG_PREPARE_ALT " Manual Control \003"
	#define MSG_CONTROL_ARROW " Machine Settings \x7E"
	#define MSG_RETRACT_ARROW " Retract \x7E"
	#define MSG_TUNE " Tune    \x7E"
	#define MSG_PAUSE_PRINT " Pause Print \x7E"
	#define MSG_RESUME_PRINT " Resume Print \x7E"
	#define MSG_STOP_PRINT " Stop Print   \x7E"
	#define MSG_CARD_MENU " SD Card Menu    \x7E"
	#define MSG_NO_CARD " No Card"
	#define MSG_DWELL "Sleep Mode"
	#define MSG_USERWAIT "Wait for user..."
	#define MSG_NO_MOVE "No move."
	#define MSG_PART_RELEASE "Partial Release"
	#define MSG_KILLED "KILLED. "
	#define MSG_STOPPED "STOPPED. "
	#define MSG_STEPPER_RELEASED "Released."
	#define MSG_CONTROL_RETRACT  " Retract mm:"
	#define MSG_CONTROL_RETRACTF " Retract  F:"
	#define MSG_CONTROL_RETRACT_ZLIFT " Hop mm:"
	#define MSG_CONTROL_RETRACT_RECOVER " UnRet +mm:"
	#define MSG_CONTROL_RETRACT_RECOVERF " UnRet  F:"
	#define MSG_AUTORETRACT " AutoRetr.:"
        #define MSG_SERIAL_ERROR_MENU_STRUCTURE "Something is wrong in the MenuStructure."

// Serial Console Messages

	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " External Reset"
	#define MSG_BROWNOUT_RESET " Brown out Reset"
	#define MSG_WATCHDOG_RESET " Watchdog Reset"
	#define MSG_SOFTWARE_RESET " Software Reset"
	#define MSG_MARLIN "Marlin "
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Last Updated: "
	#define MSG_FREE_MEMORY " Free Memory: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Done saving file."
	#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line:"
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line:"
	#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line:"
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line:"
	#define MSG_FILE_PRINTED "Done printing file"
	#define MSG_BEGIN_FILE_LIST "Begin file list"
	#define MSG_END_FILE_LIST "End file list"
	#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
	#define MSG_ERR_NO_THERMISTORS "No thermistors - no temp"
	#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
	#define MSG_HEATING "Heating..."
	#define MSG_HEATING_COMPLETE "Heating done."
	#define MSG_BED_HEATING "Bed Heating."
	#define MSG_BED_DONE "Bed done."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Marlin hacked by SeeMeCNC FIRMWARE_URL:" FIRMWARE_URL " MACHINE_TYPE:" MACHINE_NAME "\n"
	#define MSG_COUNT_X " Count X:"
	#define MSG_ERR_KILLED "Printer halted. kill() called !!"
	#define MSG_ERR_STOPPED "Printer stopped deu to errors. Fix the error and use M999 to restart!. (This is usually caused by thermistors not plugged in/configured)"
	#define MSG_RESEND "Resend:"
	#define MSG_UNKNOWN_COMMAND "Unknown command:\""
	#define MSG_ACTIVE_EXTRUDER "Active Extruder: "
	#define MSG_INVALID_EXTRUDER "Invalid extruder"
	#define MSG_X_MIN "x_min:"
	#define MSG_X_MAX "x_max:"
	#define MSG_Y_MIN "y_min:"
	#define MSG_Y_MAX "y_max:"
	#define MSG_Z_MIN "z_min:"
	#define MSG_Z_MAX "z_max:"

	#define MSG_SD_CANT_OPEN_SUBDIR "Cannot open subdir"
	#define MSG_SD_INIT_FAIL "SD init fail"
	#define MSG_SD_VOL_INIT_FAIL "volume.init failed"
	#define MSG_SD_OPENROOT_FAIL "openRoot failed"
	#define MSG_SD_CARD_OK "SD card ok"
	#define MSG_SD_WORKDIR_FAIL "workDir open failed"
	#define MSG_SD_OPEN_FILE_FAIL "open failed, File: "
	#define MSG_SD_FILE_OPENED "File opened:"
	#define MSG_SD_SIZE " Size:"
	#define MSG_SD_FILE_SELECTED "File selected"
	#define MSG_SD_WRITE_TO_FILE "Writing to file: "
	#define MSG_SD_PRINTING_BYTE "SD printing byte "
	#define MSG_SD_NOT_PRINTING "Not SD printing"
	#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir:"

	#define MSG_STEPPER_TO_HIGH "Steprate to high : "
	#define MSG_ENDSTOPS_HIT "endstops hit: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented, adjust your temps or lower min temps in your firmware"
	#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"

#endif
#if LANGUAGE_CHOICE == 4

// LCD Menu Messages

	#define WELCOME_MSG MACHINE_NAME " Bereit."

	#define MSG_SD_INSERTED      "SDKarte erkannt"
	#define MSG_SD_REMOVED       "SDKarte entfernt"
	#define MSG_MAIN             " Hauptmneü \003"
	#define MSG_AUTOSTART        " Autostart"
	#define MSG_DISABLE_STEPPERS " Stepper abschalten"
	#define MSG_AUTO_HOME        " Auto Nullpunkt"
	#define MSG_SET_ORIGIN       " Setze Nullpunkt"
	#define MSG_PREHEAT_PLA      " Vorwärmen PLA"
	#define MSG_PREHEAT_PLA_SETTINGS " Vorwärmen PLA Einstellungen"
	#define MSG_PREHEAT_ABS      " Vorwärmen ABS"
	#define MSG_PREHEAT_ABS_SETTINGS "  Vorwärmen ABS Einstellungen"
	#define MSG_COOLDOWN         " Abkühlen"
	#define MSG_EXTRUDE          " Extrude"
	#define MSG_RETRACT          " Retract"
	#define MSG_MOVE_AXIS        " Achsen bewegen\x7E"
	#define MSG_SPEED            " Geschw:"
	#define MSG_NOZZLE           " \002Düse:"
	#define MSG_NOZZLE1          " \002Düse2:"
	#define MSG_NOZZLE2          " \002Düse3:"
	#define MSG_BED              " \002Bett:"
	#define MSG_FAN_SPEED        " Lüftergeschw.:"
	#define MSG_FLOW             " Fluß:"
	#define MSG_CONTROL          " Einstellungen \003"
	#define MSG_MIN              " \002 Min:"
	#define MSG_MAX              " \002 Max:"
	#define MSG_FACTOR           " \002 Faktor:"
	#define MSG_AUTOTEMP         " AutoTemp:"
	#define MSG_ON               "Ein "
	#define MSG_OFF              "Aus "
	#define MSG_PID_P            " PID-P: "
	#define MSG_PID_I            " PID-I: "
	#define MSG_PID_D            " PID-D: "
	#define MSG_PID_C            " PID-C: "
	#define MSG_ACC              " Acc:"
	#define MSG_VXY_JERK         " Vxy-jerk: "
	#define MSG_VMAX             " Vmax "
	#define MSG_X                "x:"
	#define MSG_Y                "y:"
	#define MSG_Z                "z:"
	#define MSG_E                "e:"
	#define MSG_VMIN             " Vmin:"
	#define MSG_VTRAV_MIN        " VTrav min:"
	#define MSG_AMAX             " Amax "
	#define MSG_A_RETRACT        " A-Retract:"
	#define MSG_XSTEPS           " Xsteps/mm:"
	#define MSG_YSTEPS           " Ysteps/mm:"
	#define MSG_ZSTEPS           " Zsteps/mm:"
	#define MSG_ESTEPS           " Esteps/mm:"
	#define MSG_MAIN_WIDE        " Hauptmenü     \003"
	#define MSG_RECTRACT_WIDE    " Rectract      \x7E"
	#define MSG_WATCH            " Beobachten    \003"
	#define MSG_TEMPERATURE_WIDE " Temperatur    \x7E"
        #define MSG_TEMPERATURE_RTN  " Temperatur    \003"
	#define MSG_MOTION_WIDE      " Bewegung      \x7E"
	#define MSG_STORE_EPROM      " EPROM speichern"
	#define MSG_LOAD_EPROM       " EPROM laden"
	#define MSG_RESTORE_FAILSAFE " Standardkonfig."
	#define MSG_REFRESH          "\004Aktualisieren"
	#define MSG_PREPARE          " Vorbereitung  \x7E"
	#define MSG_PREPARE_ALT      " Vorbereitung  \003"
	#define MSG_CONTROL_ARROW    " Einstellungen \x7E"
	#define MSG_TUNE             " Justierung    \x7E"
	#define MSG_PAUSE_PRINT      " Druck anhalten\x7E"
	#define MSG_RESUME_PRINT     " Druck fortsetz\x7E"
	#define MSG_STOP_PRINT       " Druck stoppen \x7E"
	#define MSG_CARD_MENU        " SDKarten Menü \x7E"
	#define MSG_NO_CARD          " Keine SDKarte"
	#define MSG_DWELL            "Warten..."		
	#define MSG_USERWAIT         "Warte auf Nutzer..."
	#define MSG_NO_MOVE          "Kein Zug."
	#define MSG_PART_RELEASE     "Stepper tlw frei"
	#define MSG_KILLED           "KILLED"
	#define MSG_STOPPED          "GESTOPPT"
	#define MSG_STEPPER_RELEASED "Stepper frei"
        #define MSG_CONTROL_RETRACT  " Retract mm:"
        #define MSG_CONTROL_RETRACTF " Retract  F:"
        #define MSG_CONTROL_RETRACT_ZLIFT " Hop mm:"
        #define MSG_CONTROL_RETRACT_RECOVER " UnRet +mm:"
        #define MSG_CONTROL_RETRACT_RECOVERF " UnRet  F:"
        #define MSG_AUTORETRACT      " AutoRetr.:"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Fehler in Menüstruktur."
	
// Serial Console Messages

	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " External Reset"
	#define MSG_BROWNOUT_RESET " Brown out Reset"
	#define MSG_WATCHDOG_RESET " Watchdog Reset"
	#define MSG_SOFTWARE_RESET " Software Reset"
	#define MSG_MARLIN "Marlin: "
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Last Updated: "
	#define MSG_FREE_MEMORY " Free Memory: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Done saving file."
	#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line:"
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line:"
	#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line:"
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line:"
	#define MSG_FILE_PRINTED "Done printing file"
	#define MSG_BEGIN_FILE_LIST "Begin file list"
	#define MSG_END_FILE_LIST "End file list"
	#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
	#define MSG_ERR_NO_THERMISTORS "No thermistors - no temp"
	#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
	#define MSG_HEATING "Heating..."
	#define MSG_HEATING_COMPLETE "Heating done."
	#define MSG_BED_HEATING "Bed Heating."
	#define MSG_BED_DONE "Bed done."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Marlin V1; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) "\n"
	#define MSG_COUNT_X " Count X:"
	#define MSG_ERR_KILLED "Printer halted. kill() called !!"
	#define MSG_ERR_STOPPED "Printer stopped due to errors. Fix the error and use M999 to restart!"
	#define MSG_RESEND "Resend:"
	#define MSG_UNKNOWN_COMMAND "Unknown command:\""
	#define MSG_ACTIVE_EXTRUDER "Active Extruder: "
	#define MSG_INVALID_EXTRUDER "Invalid extruder"
	#define MSG_X_MIN "x_min:"
	#define MSG_X_MAX "x_max:"
	#define MSG_Y_MIN "y_min:"
	#define MSG_Y_MAX "y_max:"
	#define MSG_Z_MIN "z_min:"
	#define MSG_Z_MAX "z_max:"

	#define MSG_SD_CANT_OPEN_SUBDIR "Cannot open subdir"
	#define MSG_SD_INIT_FAIL "SD init fail"
	#define MSG_SD_VOL_INIT_FAIL "volume.init failed"
	#define MSG_SD_OPENROOT_FAIL "openRoot failed"
	#define MSG_SD_CARD_OK "SD card ok"
	#define MSG_SD_WORKDIR_FAIL "workDir open failed"
	#define MSG_SD_OPEN_FILE_FAIL "open failed, File: "
	#define MSG_SD_FILE_OPENED "File opened:"
	#define MSG_SD_SIZE " Size:"
	#define MSG_SD_FILE_SELECTED "File selected"
	#define MSG_SD_WRITE_TO_FILE "Writing to file: "
	#define MSG_SD_PRINTING_BYTE "SD printing byte "
	#define MSG_SD_NOT_PRINTING "Not SD printing"
	#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir:"

	#define MSG_STEPPER_TO_HIGH "Steprate to high : "
	#define MSG_ENDSTOPS_HIT "endstops hit: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented"
	#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"

#endif

#if LANGUAGE_CHOICE == 5

// LCD Menu Messages
#define WELCOME_MSG MACHINE_NAME " Lista."
#define MSG_SD_INSERTED "Tarjeta SD Colocada"
#define MSG_SD_REMOVED "Tarjeta SD Retirada"
#define MSG_MAIN " Menu Principal \003"
#define MSG_AUTOSTART " Autostart"
#define MSG_DISABLE_STEPPERS " Apagar Motores"
#define MSG_AUTO_HOME " Llevar Ejes al Cero"
#define MSG_SET_ORIGIN " Establecer Cero"
#define MSG_COOLDOWN " Enfriar"
#define MSG_EXTRUDE " Extruir"
#define MSG_RETRACT " Retract"
#define MSG_PREHEAT_PLA " Precalentar PLA"
#define MSG_PREHEAT_PLA_SETTINGS " Precalentar PLA Setting"
#define MSG_PREHEAT_ABS " Precalentar ABS"
#define MSG_PREHEAT_ABS_SETTINGS " Precalentar ABS Setting"
#define MSG_MOVE_AXIS " Mover Ejes      \x7E"
#define MSG_SPEED " Velocidad:"
#define MSG_NOZZLE " \002Nozzle:"
#define MSG_NOZZLE1 " \002Nozzle2:"
#define MSG_NOZZLE2 " \002Nozzle3:"
#define MSG_BED " \002Base:"
#define MSG_FAN_SPEED " Ventilador:"
#define MSG_FLOW " Flujo:"
#define MSG_CONTROL " Control \003"
#define MSG_MIN " \002 Min:"
#define MSG_MAX " \002 Max:"
#define MSG_FACTOR " \002 Fact:"
#define MSG_AUTOTEMP " Autotemp:"
#define MSG_ON "On "
#define MSG_OFF "Off"
#define MSG_PID_P " PID-P: "
#define MSG_PID_I " PID-I: "
#define MSG_PID_D " PID-D: "
#define MSG_PID_C " PID-C: "
#define MSG_ACC  " Acc:"
#define MSG_VXY_JERK " Vxy-jerk: "
#define MSG_VMAX " Vmax "
#define MSG_X "x:"
#define MSG_Y "y:"
#define MSG_Z "z:"
#define MSG_E "e:"
#define MSG_VMIN " Vmin:"
#define MSG_VTRAV_MIN " VTrav min:"
#define MSG_AMAX " Amax "
#define MSG_A_RETRACT " A-retrac.:"
#define MSG_XSTEPS " Xpasos/mm:"
#define MSG_YSTEPS " Ypasos/mm:"
#define MSG_ZSTEPS " Zpasos/mm:"
#define MSG_ESTEPS " Epasos/mm:"
#define MSG_MAIN_WIDE " Menu Principal  \003"
#define MSG_RECTRACT_WIDE " Retraer         \x7E"
#define MSG_TEMPERATURE_WIDE " Temperatura     \x7E"
#define MSG_TEMPERATURE_RTN  " Temperatura     \003"
#define MSG_MOTION_WIDE " Movimiento      \x7E"
#define MSG_STORE_EPROM " Guardar Memoria"
#define MSG_LOAD_EPROM " Cargar Memoria"
#define MSG_RESTORE_FAILSAFE " Rest. de emergencia"
#define MSG_REFRESH "\004Volver a cargar"
#define MSG_WATCH " Monitorizar \003"
#define MSG_PREPARE " Preparar \x7E"
#define MSG_PREPARE_ALT " Preparar \003"
#define MSG_CONTROL_ARROW " Control  \x7E"
#define MSG_RETRACT_ARROW " Control  \x7E"
#define MSG_TUNE " Ajustar \x7E"
#define MSG_PAUSE_PRINT " Pause Print \x7E"
#define MSG_RESUME_PRINT " Resume Print \x7E"
#define MSG_STOP_PRINT " Detener Impresion \x7E"
#define MSG_CARD_MENU " Menu de SD    \x7E"
#define MSG_NO_CARD " No hay Tarjeta SD"
#define MSG_DWELL "Reposo..."
#define MSG_USERWAIT "Esperando Ordenes..."
#define MSG_NO_MOVE "Sin movimiento"
#define MSG_PART_RELEASE "Desacople Parcial"
#define MSG_KILLED "PARADA DE EMERGENCIA. "
#define MSG_STOPPED "PARADA. "
#define MSG_STEPPER_RELEASED "Desacoplada."
#define MSG_CONTROL_RETRACT  " Retraer mm:"
#define MSG_CONTROL_RETRACTF " Retraer  F:"
#define MSG_CONTROL_RETRACT_ZLIFT " Levantar mm:"
#define MSG_CONTROL_RETRACT_RECOVER " DesRet +mm:"
#define MSG_CONTROL_RETRACT_RECOVERF " DesRet F:"
#define MSG_AUTORETRACT " AutoRetr.:"
#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Hay un error en la estructura del menu"

// Serial Console Messages

#define MSG_Enqueing "En cola \""
#define MSG_POWERUP "PowerUp"
#define MSG_EXTERNAL_RESET " Reset Externo"
#define MSG_BROWNOUT_RESET " Reset por Voltaje Incorrecto"
#define MSG_WATCHDOG_RESET " Reset por Bloqueo"
#define MSG_SOFTWARE_RESET " Reset por Software"
#define MSG_MARLIN "Marlin "
#define MSG_AUTHOR " | Autor: "
#define MSG_CONFIGURATION_VER " Ultima actualizacion: "
#define MSG_FREE_MEMORY " Memoria libre: "
#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
#define MSG_OK "ok"
#define MSG_FILE_SAVED "Guardado."
#define MSG_ERR_LINE_NO "El Numero de Linea no es igual al Ultimo Numero de Linea+1, Ultima Linea:"
#define MSG_ERR_CHECKSUM_MISMATCH "el checksum no coincide, Ultima Linea:"
#define MSG_ERR_NO_CHECKSUM "No se pudo hallar el Checksum con el numero de linea, Ultima Linea:"
#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No se hallo el Numero de Linea con el Checksum, Ultima Linea:"
#define MSG_FILE_PRINTED "Impresion terminada"
#define MSG_BEGIN_FILE_LIST "Comienzo de la lista de archivos"
#define MSG_END_FILE_LIST "Fin de la lista de archivos"
#define MSG_M104_INVALID_EXTRUDER "M104 Extrusor Invalido "
#define MSG_M105_INVALID_EXTRUDER "M105 Extrusor Invalido "
#define MSG_ERR_NO_THERMISTORS "No hay termistores - no temp"
#define MSG_M109_INVALID_EXTRUDER "M109 Extrusor Invalido "
#define MSG_HEATING "Calentando..."
#define MSG_HEATING_COMPLETE "Calentamiento Hecho."
#define MSG_BED_HEATING "Calentando la base."
#define MSG_BED_DONE "Base Caliente."
#define MSG_M115_REPORT "FIRMWARE_NAME:Marlin V1; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) "\n"
#define MSG_COUNT_X " Cuenta X:"
#define MSG_ERR_KILLED "¡¡Impresora Parada con kill()!!"
#define MSG_ERR_STOPPED "¡Impresora parada por errores. Arregle el error y use M999 Para reiniciar!. (La temperatura se reestablece. Ajustela antes de continuar)"
#define MSG_RESEND "Reenviar:"
#define MSG_UNKNOWN_COMMAND "Comando Desconocido:\""
#define MSG_ACTIVE_EXTRUDER "Extrusor Activo: "
#define MSG_INVALID_EXTRUDER "Extrusor Invalido"
#define MSG_X_MIN "x_min:"
#define MSG_X_MAX "x_max:"
#define MSG_Y_MIN "y_min:"
#define MSG_Y_MAX "y_max:"
#define MSG_Z_MIN "z_min:"
#define MSG_Z_MAX "z_max:"

#define MSG_SD_CANT_OPEN_SUBDIR "No se pudo abrir la subcarpeta."
#define MSG_SD_INIT_FAIL "Fallo al iniciar la SD"
#define MSG_SD_VOL_INIT_FAIL "Fallo al montar el volumen"
#define MSG_SD_OPENROOT_FAIL "Fallo al abrir la carpeta raiz"
#define MSG_SD_CARD_OK "Tarjeta SD OK"
#define MSG_SD_WORKDIR_FAIL "Fallo al abrir la carpeta de trabajo"
#define MSG_SD_OPEN_FILE_FAIL "Error al abrir, Archivo: "
#define MSG_SD_FILE_OPENED "Archivo abierto:"
#define MSG_SD_SIZE " Tamaño:"
#define MSG_SD_FILE_SELECTED "Archivo Seleccionado"
#define MSG_SD_WRITE_TO_FILE "Escribiendo en el archivo: "
#define MSG_SD_PRINTING_BYTE "SD imprimiendo el byte "
#define MSG_SD_NOT_PRINTING "No se esta imprimiendo con SD"
#define MSG_SD_ERR_WRITE_TO_FILE "Error al escribir en el archivo"
#define MSG_SD_CANT_ENTER_SUBDIR "No se puede entrar en la carpeta:"

#define MSG_STEPPER_TO_HIGH "Steprate demasiado alto : "
#define MSG_ENDSTOPS_HIT "Se ha tocado el fin de carril: "
#define MSG_ERR_COLD_EXTRUDE_STOP " extrusion fria evitada"
#define MSG_ERR_LONG_EXTRUDE_STOP " extrusion demasiado larga evitada"

#endif
#endif // ifndef LANGUAGE_H
