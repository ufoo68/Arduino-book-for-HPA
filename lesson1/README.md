# Lesson1:サーボモータをとりあえず動かしてみよう
操舵プログラムの超入門編、スウィープです。ある意味操舵の「Hello,world」でしょうか。  
動作指令はあえて穴あきにせず、パルス幅で最初から指定しています。サーボモータへの信号線は、パルス幅で角度指令を送っているという後のサーボの仕組みの理解に繋げやすいと考えてのことです。  
この場合は100度の範囲でサーボモータを動かしています。ここは弊チームの動作範囲にならっただけの話ですが、サーボモータの動作範囲は基本120度の範囲で使うことが多いようです。  
# 回答
い：Servo  
ろ：9  
は：write  
