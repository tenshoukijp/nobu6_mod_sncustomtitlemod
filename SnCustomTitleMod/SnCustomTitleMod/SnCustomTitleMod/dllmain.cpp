// dllmain.cpp : DLL アプリケーションのエントリ ポイントを定義します。

#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>

BOOL APIENTRY DllMain( HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved ) {
	return TRUE;
}

//--------------------------------------------------------
void WINAPI On_初期化(HANDLE 呼び出し元ハンドル) {

	int pt[] = { 0x4d36E4, 0x4d36C4, 0x4d36A4, 0x4d3684, 0x4d3664, 0x4d3644 }; // シナリオタイトルが存在するアドレス
		
	char *新タイトル[] = {
		"  三人の養子 （１５０７年）",
		NULL,                                   // 元のタイトルを採用するときは、このようにNULLとする。
		"  相剋の果て （１５６５年）",
		"信長包囲網･改（１５７１年）",
		"本能寺の変･改（１５８２年）",
		"関ヶ原前夜･改（１５９９年）"
	};

	for (int i=0; i<6; i++) {
		if (新タイトル[i]) {
			strncpy((char *)pt[i], 新タイトル[i], 31);
		}
	}
}


char** WINAPI On_シナリオ説明表示直前(int シナリオ番号) {

	switch(シナリオ番号) {
		case 1: 
			{
				static char *sn[] = {
					"シナリオ１説明文・上部",
					"シナリオ１説明文・中部",
					"シナリオ１説明文・下部"
				};
				return sn;
			}

		case 2: 
			{
				return NULL; // 元の説明文を採用するときは、このように return NULL; とする。
			}

		case 3:
			{
				static char *sn[] = {
					"  １５６５（永禄八）年、将軍足利義輝は、三好義継\x0A"
					"と松永久秀の謀反により横死した。既に三好氏に長慶\x0A"
					"は亡く、天下は乱れる糸の如き有様で、治まる気配が\x0A"
					"無かった。\x0A"
					"  東にて北条氏康、武田信玄、上杉謙信が勢威を誇れ\x0A"
					,

					"ば、織田信長、松平家康らが期を窺い、西にて毛利元\x0A"
					"就、大友宗麟が覇を競えば、宇喜多直家、長宗我部元\x0A"
					"親らがその隙を狙う。\x0A"
					"　戦乱は日本全土を覆い、まさに千載一遇。掌中に天\x0A"
					"下を掴むことも夢ではなかった。\x0A"
					,

					"\x0A"
					"　“上洛を果たし、天下に号令するは誰か…？”\x0A"
					"\x0A"
					"　己の家運と知勇の全てを賭して戦う群雄達。その野\x0A"
					"望の敵は、人か、それとも天なのか…\x0A"
				};
				return sn;
			}

		case 4:
			{
				static char *sn[] = {
					"シナリオ４説明文・上部",
					"シナリオ４説明文・中部",
					"シナリオ４説明文・下部"
				};
				return sn;
			}

		case 5:
			{
				return NULL; // 元の説明文を採用するときは、このように return NULL; とする。
			}

		case 6:
			{
				static char *sn[] = {
					"シナリオ６説明文・上部",
					"シナリオ６説明文・中部",
					"シナリオ６説明文・下部"
				};
				return sn;
			}
	}

	return NULL;
}


void WINAPI On_シナリオ大名選択直前() {
}


void WINAPI On_メインゲーム開始() {
}


void WINAPI On_相場変更直前() {
}
