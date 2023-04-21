#include "keypad.h"

uint8_t keyCmd;

char readKeypad()
{
	HAL_GPIO_WritePin(Key_R1_GPIO_Port, Key_R1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Key_R2_GPIO_Port, Key_R2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Key_R3_GPIO_Port, Key_R3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Key_R4_GPIO_Port, Key_R4_Pin, GPIO_PIN_SET);

	if (!(HAL_GPIO_ReadPin(Key_C1_GPIO_Port, Key_C1_Pin)))
	{
		while (!(HAL_GPIO_ReadPin(Key_C1_GPIO_Port, Key_C1_Pin)))
			;
		keyCmd = '1';
	}
	if (!(HAL_GPIO_ReadPin(Key_C2_GPIO_Port, Key_C2_Pin)))
	{
		while (!(HAL_GPIO_ReadPin(Key_C2_GPIO_Port, Key_C2_Pin)))
			;
		keyCmd = '2';
	}
	if (!(HAL_GPIO_ReadPin(Key_C3_GPIO_Port, Key_C3_Pin)))
	{
		while (!(HAL_GPIO_ReadPin(Key_C3_GPIO_Port, Key_C3_Pin)))
			;
		keyCmd = '3';
	}
	if (!(HAL_GPIO_ReadPin(Key_C4_GPIO_Port, Key_C4_Pin)))
	{
		while (!(HAL_GPIO_ReadPin(Key_C4_GPIO_Port, Key_C4_Pin)))
			;
		keyCmd = 'A';
	}

	HAL_GPIO_WritePin(Key_R1_GPIO_Port, Key_R1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Key_R2_GPIO_Port, Key_R2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Key_R3_GPIO_Port, Key_R3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Key_R4_GPIO_Port, Key_R4_Pin, GPIO_PIN_SET);
	if (!(HAL_GPIO_ReadPin(Key_C1_GPIO_Port, Key_C1_Pin)))
	{
		while (!(HAL_GPIO_ReadPin(Key_C1_GPIO_Port, Key_C1_Pin)))
			;
		keyCmd = '4';
	}
	if (!(HAL_GPIO_ReadPin(Key_C2_GPIO_Port, Key_C2_Pin)))
	{
		while (!(HAL_GPIO_ReadPin(Key_C2_GPIO_Port, Key_C2_Pin)))
			;
		keyCmd = '5';
	}
	if (!(HAL_GPIO_ReadPin(Key_C3_GPIO_Port, Key_C3_Pin)))
	{
		while (!(HAL_GPIO_ReadPin(Key_C3_GPIO_Port, Key_C3_Pin)))
			;
		keyCmd = '6';
	}
	if (!(HAL_GPIO_ReadPin(Key_C4_GPIO_Port, Key_C4_Pin)))
	{
		while (!(HAL_GPIO_ReadPin(Key_C4_GPIO_Port, Key_C4_Pin)))
			;
		keyCmd = 'B';
	}

	HAL_GPIO_WritePin(Key_R1_GPIO_Port, Key_R1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Key_R2_GPIO_Port, Key_R2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Key_R3_GPIO_Port, Key_R3_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Key_R4_GPIO_Port, Key_R4_Pin, GPIO_PIN_SET);
	if (!(HAL_GPIO_ReadPin(Key_C1_GPIO_Port, Key_C1_Pin)))
	{
		while (!(HAL_GPIO_ReadPin(Key_C1_GPIO_Port, Key_C1_Pin)))
			;
		keyCmd = '7';
	}
	if (!(HAL_GPIO_ReadPin(Key_C2_GPIO_Port, Key_C2_Pin)))
	{
		while (!(HAL_GPIO_ReadPin(Key_C2_GPIO_Port, Key_C2_Pin)))
			;
		keyCmd = '8';
	}
	if (!(HAL_GPIO_ReadPin(Key_C3_GPIO_Port, Key_C3_Pin)))
	{
		while (!(HAL_GPIO_ReadPin(Key_C3_GPIO_Port, Key_C3_Pin)))
			;
		keyCmd = '9';
	}
	if (!(HAL_GPIO_ReadPin(Key_C4_GPIO_Port, Key_C4_Pin)))
	{
		while (!(HAL_GPIO_ReadPin(Key_C4_GPIO_Port, Key_C4_Pin)))
			;
		keyCmd = 'C';
	}

	HAL_GPIO_WritePin(Key_R1_GPIO_Port, Key_R1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Key_R2_GPIO_Port, Key_R2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Key_R3_GPIO_Port, Key_R3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Key_R4_GPIO_Port, Key_R4_Pin, GPIO_PIN_RESET);
	if (!(HAL_GPIO_ReadPin(Key_C1_GPIO_Port, Key_C1_Pin)))
	{
		while (!(HAL_GPIO_ReadPin(Key_C1_GPIO_Port, Key_C1_Pin)))
			;
		keyCmd = '*';
	}
	if (!(HAL_GPIO_ReadPin(Key_C2_GPIO_Port, Key_C2_Pin)))
	{
		while (!(HAL_GPIO_ReadPin(Key_C2_GPIO_Port, Key_C2_Pin)))
			;
		keyCmd = '0';
	}
	if (!(HAL_GPIO_ReadPin(Key_C3_GPIO_Port, Key_C3_Pin)))
	{
		while (!(HAL_GPIO_ReadPin(Key_C3_GPIO_Port, Key_C3_Pin)))
			;
		keyCmd = '#';
	}
	if (!(HAL_GPIO_ReadPin(Key_C4_GPIO_Port, Key_C4_Pin)))
	{
		while (!(HAL_GPIO_ReadPin(Key_C4_GPIO_Port, Key_C4_Pin)))
			;
		keyCmd = 'D';
	}
	return keyCmd;
}
