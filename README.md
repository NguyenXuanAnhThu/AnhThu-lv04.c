Nguyễn Xuân Anh Thư

Báo cáo học ARRAY:

[1. Dữ liệu kiểu mảng](dulieukieumang)

  [a. Khái niệm](khainiem)
  
  [b. Cách khai báo biến mảng](khaibaobienmang)
  
  [c. Cách tổ chức và truy xuất đến phần tử mảng](tochucvatruyhoi)
  
  [d. Cách nhập xuất dữ liệu trên mảng](nhapxuatdulieu)

[2. Kiểu mảng](kieumang)
 
 [a. Mảng một chiều](mang1chieu)
 
 [b. Mảng nhiều chiều](mangnhieuchieu)
 
<a name="Dulieukieumang"></a>
## 1. Dữ liệu kiểu mảng:
   <a name="khainiem"></a>
     a. Khái niệm:
     
    * Mảng được hiểu là một tập hợp các giá trị có cùng kiểu dữ liệu nằm liên tiếp nhau trong bộ nhớ máy tính.
    
    * Mảng được coi như một biến mảng và tên mảng được đặt theo quy tác đặt tên biến.
    
    * Mảng có những thành phần sau:
    
      - Kiểu dữ liệu của các phần tử trong mảng
    
      - Tên mảng
    
      - Số chiều và kích thước của mỗi chiều
   <a name="khaibaobienmang"></a>
    b. Cách khai báo biến mảng:
    
      <kiểu_dữ_liệu><tên_mảng><danh_sách_các_chiều_của_mảng>
      
      Ví dụ: int A[10]; //Mảng 1 chiều A gồm 10 phần tử kiểu số nguyên
            float B[2][3]; // Mảng 2 chiều B gồm 2 hàng 3 cột, các phần tử có kiểu số thực
   <a name="tochucvatruyhoi"><a/>
    c. Cách tổ chức và truy xuất đến phần tử mảng:
      
      * Phần tử của mảng được xác định thông qua chỉ số. Chỉ số của phần tử trong mảng luôn là một số nguyên không vượt qua kích thước của mảng.
      
      * Các phần tử của mảng được sắp xếp liền nhau trong bộ nhớ của máy tính và chỉ cho phép truy cập đến địa chỉ trực tiếp của phần tử đối với mảng một chiều. Cách truy cập theo địa chỉ: &tên_biến[i] ( trong đó i là chỉ số phần tử)
      
      * Ví dụ: a=&a[0] //Tên mảng chỉ tới địa chỉ phần tử đầu tiên của mảng.			
	<a name="nhapxuatdulieu"><a/>
	d. Cách nhập xuất dữ liệu trên mảng:
		  - Nhập xuất trực tiếp ứng dụng cho mảng một chiều và mảng hai chiều có phần tử kiểu int thông qua địa chỉ
			- Nhập dữ liệu cho mảng
			  for(i=0;i<5;i++)
				  {
					  printf("phan tu thu %d=",i)
						scanf ("%d",&a[i]);
					}
		 - In ra các phần tử của mảng ra màn hình: for(i=0;i< n;i++) printf("%6d",a[i]);
		 

<a name="Kieumang"></a>
## 2. Kiểu mảng:
.
.
.
.


