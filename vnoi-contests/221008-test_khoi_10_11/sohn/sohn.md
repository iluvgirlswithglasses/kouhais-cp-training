
# Lá mùa thu

*"Hà Nội mùa thu, cây cơm nguội vàng, cây bàng lá đỏ, nằm kề bên nhau phố xưa nhà cổ, mái ngói thâm nâu... Hà Nội mùa thu! Đi giữa mọi người, lòng như thầm hỏi "tôi đang nhớ ai?", sẽ có một ngày trời thu Hà Nội, trả lời cho tôi, sẽ có một ngày từng con đường nhỏ trả lời cho tôi."*

*iluvgirlswithglasses* vừa thong thả tản bộ dưới trời thu, vừa ngâm nga đoạn đoản ca xưa ấy. Đến đoạn, cậu bất giác nhìn thấy một vẻ đẹp kỳ lạ của những đống lá cây mới được gom hồi sáng sớm, rằng nếu xếp **một đống $X$ chiếc lá** ngay cạnh **một đống $Y$ chiếc lá** sao cho:

- $X < Y$  
- tổng các ước của $X$ bằng với $Y$  
- tổng các ước của $Y$ bằng với $X$

...thì 2 đống lá này sẽ tạo ra một khung cảnh vô cùng trang nhã, làm xao động lòng người. *iluvgirlswithglasses* gọi 2 đống này là **một cặp đống lá đẹp**.

*iluvgirlswithglasses* mới tự hỏi rằng, nếu mỗi đống có tối đa $N$ chiếc lá, thì có thể tạo ra bao nhiêu cặp đẹp.

Bạn hãy thử trả lời câu hỏi này nhé!

**Quy định:** Số 1 được coi là ước số của mọi số còn mỗi số không được coi là ước số của chính nó.

## Input:

Gồm số nguyên dương $N$.

## Output:

Mỗi dòng là một cặp đống lá đẹp. Các cặp được sắp xếp theo thứ tự $X$ tăng dần.

## Constraints

$1 \leq N \leq 10^6$

## Sample Input
```
500
```

## Sample Output
```
220 284
```

## Explanation

Nếu mỗi đống có tối đa 500 chiếc lá thì chỉ có thể tạo ra 1 cặp đẹp.

Ở đống lá thứ nhất với 220 chiếc lá, tổng các ước của 220 là:  
$1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284$

Ở đống lá thứ hai với 284 chiếc lá, tổng các ước của 284 là:  
$1 + 2 + 4 + 71 + 142 = 220$
