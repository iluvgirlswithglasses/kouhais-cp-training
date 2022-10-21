---
title: "Ib"
author: "iluvgirlswithglasses"
date: "Sep-23-2022"
geometry: margin=2cm
output: 
  pdf_document: 
    latex_engine: xelatex
fontsize: 12pt
---

## Statement

Ib (2012) là một tựa game hay kiệt xuất, vô tiền khoáng hậu. Tuy kế thừa những điểm yếu cố hữu của dòng game RGPmaker như gameplay giải đố thiếu nổi trội, đồ họa thế kỷ 20... Điều làm game trở nên xuất sắc chính là câu chuyện mà nó truyền tải: Không phức tạp, không dông dài, nhưng độc đáo, sâu sắc, mọi chi tiết dù là nhỏ nhất đều được chăm chút tỉ mỉ,... lại chan chứa những tình cảm, nỗi buồn, nỗi day dứt vô cùng lắng đọng.

Trong game có một câu đố như sau:

Cho một căn phòng hình chữ nhật dài $a$ mét, rộng $b$ mét, chia ra thành $a \times b$ ô vuông, mỗi ô có diện tích 1 mét vuông. Các ô vuông được ký hiệu như sau:

- "`.`": Ô trống
- "`#`": Chướng ngại vật
- "`!`": Ô có chứa 1 con búp bê
- "`S`": Ô *Garry* đang đứng
- "`D`": Ô đích đến

Trong một lượt, *Garry* được phép di chuyển từ ô mình đang đứng sang một ô kề cạnh nếu ô đó không phải chướng ngại vật. Nếu *Garry* đang đứng trên một ô có chứa búp bê (được đánh dấu `!`), anh được phép thu thập nó.

Hỏi tốn tối thiểu bao nhiêu lượt để hoàn thành phần chơi sau: Điều khiển *Garry* di chuyển từ vị trí khởi đầu (được đánh dấu `S`) đi thu thập toàn bộ các con búp bê trong phòng, rồi di chuyển vào ô đích đến (được đánh dấu `D`).

## Input

Dòng 1: 2 số nguyên dương $a, b$ là kích thước căn phòng. $a, b \leq 500$

$b$ dòng tiếp theo: Mỗi dòng là một string có $a$ ký tự mô tả căn phòng trong trò chơi. 

Dữ liệu đảm bảo luôn có một ô `S` và một ô `D` trong mỗi test case. Đồng thời, số lượng búp bê tối đa trong một test case là 10 con.

## Output

Một số nguyên dương cho biết số lượt tối thiểu để hoàn thành phần chơi.

Nếu không có cách nào để hoàn thành phần chơi, in ra `-1`

## Sample Input

```
10 10
....##....
##!!!##..#
###..##..#
....###..#
..!.##....
##..####..
###....#..
##..#..S..
##!.##D...
....#.....
```

## Sample Output

```
32
```
