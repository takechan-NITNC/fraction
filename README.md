# 概要
struct fractionは分数を表します。
# 依存
このリポジトリは[gcd](https://github.com/takechan-NITNC/gcd)に依存しています。
# 仕様
## メンバ
### int denominator
分母を表します。
### int numerator
分子を表します。
## 関数
### struct fraction int_to_fraction(int)
指定した整数を分子に持ち分母が１の分数を返します。
### struct fraction fraction_sum(struct fraction, struct fraction)
与えられた２つの分数の和を返します。

分母が０である分数が与えられた場合，エラーメッセージを表示してプログラムを強制終了します。オーバーフローは考慮されません。
### struct fraction fraction_substract(struct fraction, struct fraction)
１つ目に与えられた分数から２つ目に与えられた分数を引いた分数を返します。

分母が０である分数が与えられた場合，エラーメッセージを表示してプログラムを強制終了します。オーバーフローは考慮されません。
### struct fraction fraction_product(struct fraction, struct fraction)
与えられた２つの分数の積を返します。

分母が０である分数が与えられた場合，エラーメッセージを表示してプログラムを強制終了します。オーバーフローは考慮されません。
### struct fraction fraction_divide(struct fraction, struct fraction)
１つ目に与えられた分数を２つ目に与えられた分数で割った分数を返します。

分母が０である分数が与えられた場合，エラーメッセージを表示してプログラムを強制終了します。除数に分子が０である分数が与えられた場合，エラーメッセージを表示してプログラムを強制終了します。オーバーフローは考慮されません。