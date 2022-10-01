
# Cirno's Company

Công ty *Baka⑨withglasses* có $N$ thành viên được đánh số từ $1$ đến $N$. Trừ tổng giám đốc (nhân viên số 1), nhân viên thứ $i$ trong công ty luôn có một **cấp trên trực tiếp** là nhân viên thứ $j$. Có thể thấy, quan hệ giữa các nhân viên trong công ty tạo thành một **cấu trúc hình cây** (đồ thị vô hướng liên thông không có chu trình).

Nếu $x$ là **cấp trên trực tiếp** của $y$ và $y$ là **cấp trên trực tiếp** của $z$, ta nói $x$ là **cấp trên** (nhưng không trực tiếp) của $z$.

Cho trước đồ thị mô tả quan hệ giữa các nhân viên trong công ty và $Q$ truy vấn. Truy vấn thứ $i$ gồm một số $u_{i}$. Với mỗi truy vấn, hãy trả lời xem nhân viên số hiệu $u_{i}$ là **cấp trên** (trực tiếp hoặc không trực tiếp) của bao nhiêu người.

## Input

Dòng 1: Hai số nguyên $N$ và $Q$ cho biết số nhân viên và số truy vấn. $1 \leq N \leq 10^5$

Trong $N - 1$ dòng tiếp theo: Dòng thứ $i$ chứa hai số $u, v$ cho biết $u$ là cấp trên trực tiếp của $v$. $1 \leq u, v \leq N$

Trong $Q$ số tiếp theo: Số thứ $i$ là $u_{i}$ cho biết số hiệu của nhân viên cần truy vấn. $1 \leq Q \leq N$, $1 \leq u_{i} \leq N$

## Output

$Q$ dòng, dòng thứ $i$ in ra số nguyên cho biết nhân viên $u_{i}$ là cấp trên của bao nhiêu người

## Sample Input

```
6 6

1 2
1 3
2 4
2 5
5 6

1 2 3 4 5 6
```

## Sample Output

```
5
3
0
0
1
0
```

## Constraints

25% số test có $N \leq 10$  
25% số test có $10 \leq N \leq 1000$  
50% số test còn lại không có điều kiện gì thêm
