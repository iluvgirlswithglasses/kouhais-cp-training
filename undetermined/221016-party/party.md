
# The Party of Cirno's Company

Công ty *Baka⑨withglasses* có $N$ thành viên được đánh số từ $1$ đến $N$, mối quan hệ thứ bậc của các nhân viên được biểu diễn bằng một cây $N - 1$ cạnh có dạng như hình sau:

![image](https://user-images.githubusercontent.com/58514512/196033839-644284d1-56ab-4c7f-aca1-dbe7b142d6a3.png)

Trong đó, nút 1 là nút cao nhất đại diện cho sếp của công ty. Nếu nút $u$ là nút cha của $v$, ta gọi $u$ là **cấp trên trực tiếp** của $v$. Như minh họa, ta có 1 là **cấp trên trực tiếp** của 2 và 3, còn 3 là **cấp trên trực tiếp** của 5 và 6.

Nhân ngày kỷ niệm cái nóc nhà, sếp Khâm muốn tổ chức một bữa tiệc thật hoành tráng với các vị khách mời là các nhân viên trong công ty. Khổ nỗi, vì môi trường làm việc thường ngày quá căng thẳng nên không có bất kỳ nhân viên nào muốn dự tiệc cùng **cấp trên trực tiếp** của mình. Lấy ví dụ trong hình minh họa, nếu nhân viên số 3 tham dự thì nhân viên 5 và 6 sẽ vắng mặt. Ngược lại, nếu 3 vắng mặt, 5 và 6 sẽ sẵn lòng chung vui với số 1.

Biết rằng nhân viên thứ $i$ sẽ mang đến $W_{i}$ điểm niềm vui. Anh Khâm muốn tính tổng điểm niềm vui lớn nhất trong bữa tiệc (tất nhiên anh Khâm phải có mặt). Nhưng vì bận chăm sóc cho cái nóc nhà nên anh muốn nhờ bạn hãy tính giá trị ấy giúp anh nhé :')

## Input

Dòng 1: Một số nguyên dương $N$ $(N \leq 10^5)$

Dòng 2: Gồm $N$ số nguyên, số thứ $i$ có giá trị $W_{i}$ $(1 \leq W_{i} \leq 10^6)$

Trong $N - 1$ dòng tiếp theo: Dòng thứ $i$ chứa hai số $u, v$ cho biết $u$ là cấp trên trực tiếp của $v$. $1 \leq u, v \leq N$

## Output

Phần dư khi chia đi cho $10^9 + 7$ của độ vui vẻ lớn nhất tìm được nếu anh Khâm tham dự bữa tiệc.

## Sample Input

```
7
1 1 1 1 1 1 1
1 2
1 3
2 4
2 6
3 5
3 7
```

## Sample Output

```
8
```
