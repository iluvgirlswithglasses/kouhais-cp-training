
*iluvgirlswithglasses* được phân công soạn một bộ đề gồm $K$ câu. Hiện tại, cậu đang có $N$ bài trong ngân hàng đề, các câu được đánh số từ 1 đến $N$, câu thứ $i$ có độ khó $A_{i}$. 

Để đảm bảo tình trạng *"câu thì dễ như ăn bánh, câu thì khó như lên trời"* không diễn ra, *iluvgirlswithglasses* quyết định chọn ra $K$ trong số $N$ bài tập có sẵn sao cho **chênh lệch độ khó giữa câu khó nhất và câu dễ nhất là tối thiểu**.

## Input

Dòng 1: 2 số $N, K$. $1 \leq K \leq N \leq 2 \times 10^5$

Dòng 2: $N$ số $A_{1}, A_{2},... A_{N}$. $1 \leq A_{i} \leq 10^9$

## Output

Một số nguyên cho biết chênh lệch tối thiểu giữa câu khó nhất và câu dễ nhất khi chọn ra $K$ bài tập.

## Sample Input

```
6 3
3 5 5 1 4 7
```
## Sample Output

```
1
```

## Explanation

Chọn 2 bài có độ khó 5, 1 bài có độ khó 4

## Constraints

25% số test có $N \leq 10$  
25% số test có $N \leq 1000$  
50% số test còn lại không có điều kiện gì thêm
