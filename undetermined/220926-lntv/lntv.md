
# Ngày Lành Tháng Tốt

Sau 5 năm thầm thương trộm nhớ một cô gái có đeo kính, *iluvgirlswithglasses* đã bạo dạn tỏ tình và được cô ấy đồng ý (hư cấu). Việc tiếp theo cậu cần làm là chọn ra thời điểm thích hợp để dẫn người bạn gái mới quen đi hẹn hò, cùng thưởng hoa thăm cảnh, bàn chuyện trăm năm.

Biết chuyện, *Kither* đã rộng lượng cho cậu mượn một cái đồng hồ âm dương vô cùng bá đạo. Được biết, cái đồng hồ này gồm 6 chữ số điện tử, các chữ số từ 0 đến 9 được biểu diễn như sau:

![img](https://user-images.githubusercontent.com/58514512/192288639-5996e600-c23b-4470-8c47-9154154ba6da.jpg)

Như bạn thấy, mỗi con số đều được tạo thành từ một số **que** nhất định. Như số `1` được tạo thành từ 2 que, số `2` được tạo thành từ 5 que.

*Kither* cho biết: Gọi thời điểm mà *iluvgirlswithglasses* đã tỏ tình là thời điểm $X$, có giá trị trong khoảng $[1:10^6)$ được biểu thị trên đồng hồ âm dương. Thời điểm $Y$ $(Y > X)$ sao cho tổng số que cấu thành $Y$ bằng với tổng số que cấu thành $X$ chính là thời điểm phù hợp nhất để dẫn nàng thơ đi chơi.

Hỏi: Cho trước thời điểm $X$, tính thời điểm $Y$.

## Input

Một số nguyên $X$, $1 \leq X < 10^6$

## Output

Số nguyên $Y$ theo yêu cầu. $1 \leq Y < 10^6$. 

Nếu không tồn tại giá trị $Y$ thỏa mãn, in ra -1

## Sample Input

```
91
```

## Sample Output

```
100
```


## Giải Thích

Số `91` sẽ được biểu diễn là `000091` trong đồng hồ âm dương, có tổng số que bằng 32.

Số `100` được biểu diễn là `000100`, cũng có tổng số que bằng 32.
