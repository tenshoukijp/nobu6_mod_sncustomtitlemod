// dllmain.cpp : DLL �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B

#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>

BOOL APIENTRY DllMain( HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved ) {
	return TRUE;
}

//--------------------------------------------------------
void WINAPI On_������(HANDLE �Ăяo�����n���h��) {

	int pt[] = { 0x4d36E4, 0x4d36C4, 0x4d36A4, 0x4d3684, 0x4d3664, 0x4d3644 }; // �V�i���I�^�C�g�������݂���A�h���X
		
	char *�V�^�C�g��[] = {
		"  �O�l�̗{�q �i�P�T�O�V�N�j",
		NULL,                                   // ���̃^�C�g�����̗p����Ƃ��́A���̂悤��NULL�Ƃ���B
		"  �����̉ʂ� �i�P�T�U�T�N�j",
		"�M����͖ԥ���i�P�T�V�P�N�j",
		"�{�\���̕ϥ���i�P�T�W�Q�N�j",
		"�փ����O�饉��i�P�T�X�X�N�j"
	};

	for (int i=0; i<6; i++) {
		if (�V�^�C�g��[i]) {
			strncpy((char *)pt[i], �V�^�C�g��[i], 31);
		}
	}
}


char** WINAPI On_�V�i���I�����\�����O(int �V�i���I�ԍ�) {

	switch(�V�i���I�ԍ�) {
		case 1: 
			{
				static char *sn[] = {
					"�V�i���I�P�������E�㕔",
					"�V�i���I�P�������E����",
					"�V�i���I�P�������E����"
				};
				return sn;
			}

		case 2: 
			{
				return NULL; // ���̐��������̗p����Ƃ��́A���̂悤�� return NULL; �Ƃ���B
			}

		case 3:
			{
				static char *sn[] = {
					"  �P�T�U�T�i�i�\���j�N�A���R�����`�P�́A�O�D�`�p\x0A"
					"�Ə��i�v�G�̖d���ɂ�艡�������B���ɎO�D���ɒ��c\x0A"
					"�͖S���A�V���͗���鎅�̔@���L�l�ŁA���܂�C�z��\x0A"
					"���������B\x0A"
					"  ���ɂĖk�����N�A���c�M���A�㐙���M�����Ђ��ւ�\x0A"
					,

					"�΁A�D�c�M���A�����ƍN�炪�����M���A���ɂĖї���\x0A"
					"�A�A��F�@�ق��e�������΁A�F�쑽���ƁA���@�䕔��\x0A"
					"�e�炪���̌���_���B\x0A"
					"�@�헐�͓��{�S�y�𕢂��A�܂��ɐ�ڈ���B�����ɓV\x0A"
					"����͂ނ��Ƃ����ł͂Ȃ������B\x0A"
					,

					"\x0A"
					"�@�g�㗌���ʂ����A�V���ɍ��߂���͒N���c�H�h\x0A"
					"\x0A"
					"�@�Ȃ̉Ɖ^�ƒm�E�̑S�Ă�q���Đ키�Q�Y�B�B���̖�\x0A"
					"�]�̓G�́A�l���A����Ƃ��V�Ȃ̂��c\x0A"
				};
				return sn;
			}

		case 4:
			{
				static char *sn[] = {
					"�V�i���I�S�������E�㕔",
					"�V�i���I�S�������E����",
					"�V�i���I�S�������E����"
				};
				return sn;
			}

		case 5:
			{
				return NULL; // ���̐��������̗p����Ƃ��́A���̂悤�� return NULL; �Ƃ���B
			}

		case 6:
			{
				static char *sn[] = {
					"�V�i���I�U�������E�㕔",
					"�V�i���I�U�������E����",
					"�V�i���I�U�������E����"
				};
				return sn;
			}
	}

	return NULL;
}


void WINAPI On_�V�i���I�喼�I�𒼑O() {
}


void WINAPI On_���C���Q�[���J�n() {
}


void WINAPI On_����ύX���O() {
}
