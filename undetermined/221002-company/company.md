
# Cirno's Company

Công ty *Baka ⑨ withglasses* có $N$ thành viên được đánh số từ $1$ đến $N$. Trong công ty, trừ tổng giám đốc (nhân viên số 1), nhân viên thứ $i$ luôn có một **cấp trên trực tiếp** là nhân viên thứ $j$. Có thể thấy, quan hệ giữa các nhân viên trong công ty tạo thành một **cấu trúc hình cây** (đồ thị vô hướng liên thông không có chu trình).

Nếu nhân viên $x$ là **cấp trên trực tiếp** của nhân viên $y$ và nhân viên $y$ là **cấp trên trực tiếp** của nhân viên $z$, ta nói $x$ là **cấp trên** (nhưng không trực tiếp) của nhân viên $z$.

Cho trước đồ thị hình cây và $Q$ truy vấn. Truy vấn thứ $i$ gồm một số $u$. Với mỗi truy vấn, hãy trả lời xem nhân viên số hiệu $u$ là **cấp trên** (trực tiếp hoặc không trực tiếp) của bao nhiêu người.

## Input

Dòng 1: Hai số nguyên $N$ và $Q$ cho biết số nhân viên và số truy vấn. $1 \leq N \leq 10^5$

Trong $N - 1$ dòng tiếp theo: Dòng thứ $i$ chứa hai số $u, v$ cho biết $u$ là cấp trên trực tiếp của $v$. $1 \leq u, v \leq N$

Trong $Q$ số tiếp theo: Số thứ $i$ là $u_{i}$ cho biết số hiệu của nhân viên cần truy vấn. $1 \leq u_{i} \leq N$

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
