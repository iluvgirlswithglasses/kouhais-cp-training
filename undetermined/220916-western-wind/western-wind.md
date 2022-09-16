---
title: "Gió Tây"
author: "iluvgirlswithglasses"
date: "Sep-16-2022"
geometry: margin=2cm
output: 
  pdf_document: 
    latex_engine: xelatex
fontsize: 12pt
---

## Statement

Trong trận Xích Bích, quyết định dựng đàn mượn Gió Đông của Khổng Minh Gia Cát đã bị trung thần của Tào Tháo — *là bạn :))* — nghe lén & phát giác.

Bạn bắn pháo hiệu và tất cả các lính gác của Tào Tháo đều biết rằng có tin cấp báo, nhưng không ai biết nội dung tin. 

Bạn sẽ vừa chạy, vừa hô vang thông tin về âm mưu của Khổng Minh. Trong lúc đó, những lính gác lân cận cũng sẽ chạy để nhận tin. 

Các lính gác được bố trí trên một đường thẳng, có thể chạy theo 2 hướng tiến lùi tùy ý, với tốc độ tối đa 1m/s. Một lính canh chỉ có thể nghe được thông tin từ người biết tin nếu anh ta cách người đó không quá $K$ (m). 

Khi người lính thứ $i$ nhận được thông tin, anh ta sẽ tiếp tục chạy và hô vang thông tin đến người thứ $i+1$. Thao tác trên lặp lại cho đến khi lính canh cuối cùng — *Tư Mã Ý :))* — nhận được tin.

Cho biết vị trí ban đầu của các lính canh trên trục $Ox$. Vì vinh quang của chủ công Tào Mạnh Đức, hãy cho biết thời gian tối thiểu để thông tin truyền đến tai người lính canh cuối cùng.

## Input

Dòng 1: Một số thực $K$ $(0 \leq K \leq 10^6)$

Dòng 2: Một số nguyên $N$ $(1 \leq N \leq 10^5)$ cho biết số lính canh. Trong đó, bạn là người lính canh thứ nhất.

Dòng 3: Gồm $N$ thực, số thứ $i$ cho biết khoảng cách của lính canh thứ $i$ so với lính canh thứ nhất. Dữ liệu đảm bảo không có số nào lớn hơn $10^9$

## Output

Một số thực $t$ cho biết thời gian tối thiểu để truyền tin từ người đầu tiên đến người cuối cùng, làm tròn đến chữ số thập phân thứ 2.

## Sample Input 1

```
3.00 
2 
0.00 
6.00
```

## Sample Output 1

```
1.50
```

## Sample Input 2

```
2.00
4 
0.00
4.00
4.00
8.00
```

## Sample Output 2

```
1.00
```
