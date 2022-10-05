
# Bò Chơi Điện Tử

*Ai bảo nuôi bò là dễ. Nuôi bò khó lắm đó chứ!*

Bò càng thông minh thì càng cho nhiều sữa. Biết được điều này, John Smith a.k.a Kyon đã tạo ra một trò chơi trí tuệ cho $N$ con bò (được đánh số từ 1 đến $N$) của mình.

Cụ thể, John cho lắp đặt $N$ cái đèn điện rồi phát $N$ cái công tắc cho $N$ con bò. Con bò thứ $i$ sẽ điều khiển bóng đèn thứ $i$. Khi một chú bò nhấn công tắc, nó sẽ thay đổi trạng thái của cái đèn mà nó điều khiển, khiến cho cái đèn từ tắt thành mở và ngược lại.

Sau đó, John lần lượt lệnh cho con bò thứ nhất nhấn công tắc, rồi tới con thứ hai, con thứ ba,... Trò chơi kết thúc khi John lệnh tới con thứ $N$. Khi con bò thứ $i$ nhấn công tắc, các con bò có số hiệu là bội của $i$ cũng sẽ nhấn theo.

Ban đầu tất cả đèn đều tắt. Hỏi: Sau khi con bò thứ $N$ nhấn công tắc sẽ có bao nhiêu đèn sáng.

## Input

Dòng duy nhất chứa số nguyên dương $N$ $(1 \le N \le 10^6)$

## Output

Gồm một dòng duy nhất ghi ra tổng số bóng đèn sáng cuối cùng.

## Sample Input 
```
5
```

## Sample Output 
```
2
```

## Giải thích

Ban đầu, các bóng đèn từ $1$ đến $5$ đều tắt, được biểu diễn như một mảng sau $[0, 0, 0, 0, 0]$. Lần lượt đi qua từng bóng bắt đầu từ $1$:
- Ở $1$ sẽ đổi trạng thái thành mở, tương tự với các số khác (do mọi số còn lại đều là bội của $1$) -> [1, 1, 1, 1, 1]
- Ở $2$ sẽ đổi thành trạng thái tắt, tương tự với bóng đèn thứ $4$ -> $[1, 0, 1, 0, 1]$.
- Ở $3$ cũng đổi thành tắt, không có bóng đèn nào khác thay đổi chung vì không có bội của $3$ -> $[1, 0, 0, 0, 1]$
- Ở $4$ sẽ đổi lại thành trạng thái mở -> $[1, 0, 0, 1, 1]$.
- Ở $5$ đổi thành trạng thái tắt -> $[1, 0, 0, 1, 0]$.
- Vậy có $2$ bóng đèn còn lại sáng sau khi đi duyệt qua hết $5$ bóng đèn.
