
# Kachiusa1975

Đất nước *Gensokyo* đang xảy ra binh đao với người mặt trăng. Cuộc chiến đang cam go thì cán bộ *iluvgirlswithglasses* phát hiện một thông tin sau:

Người mặt trăng đang cho bố trí $N$ kho lương thảo trên một đường thẳng. Các kho được đánh số từ 1 đến $N$, kho thứ $i$ chứa $A_{i}$ tấn lương.

Biết rằng lương thảo là huyết mạnh của quân đội, cán bộ *kachiusa1975* đã lập tức cầm quân thân chinh. Tới nơi, ngài cho bắn $M$ mũi hỏa tiễn. Khi hỏa tiễn bắn trúng một kho lương, nó sẽ thiêu rụi kho lương đó và 2 kho lương kề cạnh (một bên trái, một bên phải).

Hỏi: Sau trận tập kích của *kachiusa1975*, quân địch còn bao nhiêu tấn lương ăn?

## Input

Dòng 1: 2 số nguyên $N$, $M$. $1 \leq N, M \leq 10^6$

Dòng 2: $N$ số nguyên $A_{1}, A_{2}, A_{3},... A_{N}$. $1 \leq A_{i} \leq 10^9$

Dòng 3: $M$ số nguyên $B_{1}, B_{2}, B_{3},... B_{N}$. Trong đó, $B_{i}$ cho biết số thứ tự của kho lương bị mũi tên thứ $i$ bắn trúng. $1 \leq B_{i} \leq N$

## Output

Một số nguyên cho biết số tấn lương thảo còn lại của quân địch

## Sample Input

```
8 3
2 5 6 7 8 1 2 3
3 3 8
```

## Sample Output

```
11
```

## Explanation

Kho lương số 2, 3, 4, 7, và 8 bị cháy rụi. Các kho còn lại chứa 11 tấn lương thảo.
