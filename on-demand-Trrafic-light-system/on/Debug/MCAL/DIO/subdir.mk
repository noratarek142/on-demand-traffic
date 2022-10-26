################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/DIO/DIO.c 

OBJS += \
./MCAL/DIO/DIO.o 

C_DEPS += \
./MCAL/DIO/DIO.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/DIO/%.o: ../MCAL/DIO/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\norat\OneDrive\Documents\NTI_GROUP\workshop\on" -I"C:\Users\norat\OneDrive\Documents\NTI_GROUP\workshop\on\Debug" -I"C:\Users\norat\OneDrive\Documents\NTI_GROUP\workshop\on\APP" -I"C:\Users\norat\OneDrive\Documents\NTI_GROUP\workshop\on\MCAL\TIMER" -I"C:\Users\norat\OneDrive\Documents\NTI_GROUP\workshop\on\ECUAL\Buttons" -I"C:\Users\norat\OneDrive\Documents\NTI_GROUP\workshop\on\ECUAL\LED" -I"C:\Users\norat\OneDrive\Documents\NTI_GROUP\workshop\on\MCAL" -I"C:\Users\norat\OneDrive\Documents\NTI_GROUP\workshop\on\MCAL\DIO" -I"C:\Users\norat\OneDrive\Documents\NTI_GROUP\workshop\on\MCAL\INTERRUPT" -I"C:\Users\norat\OneDrive\Documents\NTI_GROUP\workshop\on\UTILITIES" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


