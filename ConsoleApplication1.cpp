// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main() {
    //string s = "Hello World!";
    //int count = 0;

    //for (int i = 0; i < 10; i++) {
    //    count++;

    //    string out = s;

    //    // 偶数回だけ反転
    //    if (count % 2 == 0) {
    //        reverse(out.begin(), out.end());
    //    }

    //    cout << out << "\n";
    //}



    auto forwoard = string("Hello World");
    auto reverse = forwoard;

    std::reverse(reverse.begin(),reverse.end());

    auto i = 10;

    while (i--)     
    {
        if (i & 1) 
        {
            cout << reverse << endl;
        }
        else 
        {
			cout << forwoard << endl;
        }

    }

}


// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
