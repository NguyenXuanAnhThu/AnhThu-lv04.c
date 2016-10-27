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
    
          - Kiểu dữ liệu của các phần tử trong mảng.
    
          - Tên mảng.
    
          - Số chiều và kích thước của mỗi chiều.
   <a name="khaibaobienmang"></a>
    b. Cách khai báo biến mảng:
    
      <kiểu_dữ_liệu><tên_mảng><danh_sách_các_chiều_của_mảng>
      
      Ví dụ: int A[10]; //Mảng 1 chiều A gồm 10 phần tử kiểu số nguyên
            float B[2][3]; // Mảng 2 chiều B gồm 2 hàng 3 cột, các phần tử có kiểu số thực
   <a name="tochucvatruyhoi"><a/>
    c. Cách tổ chức và truy xuất đến phần tử mảng:
      
      * Phần tử của mảng được xác định thông qua chỉ số. Chỉ số của phần tử trong mảng luôn là một số nguyên không vượt qua kích thước của mảng.
      
      * Các phần tử của mảng được sắp xếp liền nhau trong bộ nhớ của máy tính và chỉ cho phép truy cập đến địa chỉ trực tiếp của phần tử đối với mảng một chiều. Cách truy cập theo địa chỉ: &tên_biến[i] ( trong đó i là chỉ số phần tử).
      
      * Ví dụ: a=&a[0] //Tên mảng chỉ tới địa chỉ phần tử đầu tiên của mảng.			
   <a name="nhapxuatdulieu"><a/>
    d. Cách nhập xuất dữ liệu trên mảng:
      
      - Nhập xuất trực tiếp ứng dụng cho mảng một chiều và mảng hai chiều có phần tử kiểu int thông qua địa chỉ.
      
      - Nhập dữ liệu cho mảng
	
	    for(i=0;i<5;i++)
	
	   {
	
	     printf("phan tu thu %d=",i)
	
	     scanf ("%d",&a[i]);
	
	   }
      
      - In ra các phần tử của mảng ra màn hình: for(i=0;i< n;i++) printf("%6d",a[i]);

      - Nhập xuất dữ liệu gián tiếp thông qua một biến trung gian đối với mảng một chiều và mảng đa chiều:
        
	for(i=0;i<2;i++)
	
	   for(j=0;j<3;j++)
	 
	    {
	 
	       printf("a[%d,%d]",i,j);
	 
	       scanf("%f",&temp);
	 
	       a[i][j] = temp;
	 
	    }

<a name="Kieumang"></a>
## 2. Kiểu mảng:
    
    Khi làm việc với các cấu trúc dữ liệu dạng dãy hay danh scsah các phần tử, ta sử dụng kiểu mảng(array):
    
    - Mảng một chiều: một véc tơ các phần tử.
    
    - Mảng nhiều chiều: một bảng các phần tử.
<a name="mang1chieu"></a>
 a. Mảng một chiều:
  
  - Dãy các phần tử có cùng kiểu dữ liệu.
  
  - Các phần tử được sắp xếp theo trật tự nhất định.
  
  - Cú pháp của mảng một chiều: **kiểu_dữ_liệu_tên_mảng[số_phần_tử_mảng];**
  
  - Ví dụ: int ai[10]; float af[100];
  
  - Số phần tử mảng được xác định khi khai báo
  
  - Sử dụng toán tử [] để truy cập phần tử của mảng
     
     Ví dụ: ai[2]; af[10];
  
  - Chỉ số các phần tử mảng được **đánh số từ 0**.
  
  - Khởi tạo bảng:
    
    . Mảng có thể được khởi tạo giá trị ngay khi khai báo.
    
    . Cú pháp : **Kiểu_dữ_liệu tên_mảng[số_phần_từ_mảng] = {danh_sách_các_giá_trị_khởi_tạo};**
    
    . Khi khai báo mảng có khởi tạo giá trị thì có thể không cần chỉ ra số phần tử mảng.
    
    . Ví dụ: int ai[3] = {2,4,5}; hoặc int ai[] = {2,4,5} //không khai báo số phần tử mảng
    
  - Định nghĩa kiểu mới - từ khóa **Typedef**
    
    . Có thể sử dụng từ khóa **typedef** để định nghĩa các kiểu dữ liệu mới.
    
    . Kiểu dữ liệu mới sẽ được sử dụng để khai báo dữ liệu.
    
    . Ví dụ: 
      
      typedef int kieunguyen;
      
      typedef float mangthuc10[10];
      
      sử dụng: 
      
      kieunguyen x,a[100];
      
      mangthuc10 x,y;
  
  - Mảng và địa chỉ:
    
    . Toán từ **&** dùng để lấy địa chỉ một biến.
    
    . Toán tử **&** cũng được dùng để lấy địa chỉ của một phần tử mảng.
    
    . Các phần tử trong mảng được bố trí các ô nhớ liên tiếp nhau trên bộ nhớ.
       
       Nếu biết được địa chỉ phần tử thứ i sẽ xác định được địa chỉ phần tử thứ i+1.
       
       Địa chỉ phần tử đầu tiên là địa chỉ của mảng.
       
    . Tên mảng mang địa chỉ của mảng đó.
    
    . Ví dụ: 
        
	float a[100];
	
	float *pa;
	
      Các cách viết sau là tương đương:
        
	a <=> &a[0]
	
	a+i <=> &a[i]
	
	*(a+i) <=> a[i]
	
      Các phép gán hợp lệ:
         
	pa=a;
	
	pa= &a[0];
	
  - Mảng là tham số của hàm:
   
    . Khi sử dụng mảng là tham số của hàm, ta có thể khai báo, chẳng hạn: int a[] hoặc int *a
    
    . Như thế, hai cách sau là tương đương:
    
     f(int a[]) {...}
     
     f(int *a) {...}
     
    . Khi sử dụng, có thể gọi: 
      
      f(a); hoặc f(&a[0]);
   
  - Sắp xếp mảng:
  
    . Sắp xếp các phần tử của mảng sao cho giá trị chúng theo thứ tự thăng dần hay giảm dần.
    
    . Vấn đề thường gặp trong tin lập trình.
    
    . Có nhiều cách sắp xếp khác nhau:
       
       . Sắp xếp lựa chọn
       
       . Sắp xếp nổi bọt
       
       . Sắp xếp nhanh
       
       . Sắp xếp vun đống
       
       . ...
       
    . Gỉa sử các phần tử của mảng có kiểu nguyên hoặc kiểu thực
    
   * Sắp xếp lựa chọn:
  
     . Lấy phần tử đầu so sánh với các phần tử còn lại nếu nó thì đổi chỗ giá trị của phần tư đầu tiên với phần tử đang so sánh. Kết quả sau lượt đầu, phần tử đầu tiên sẽ giữ giá trị nhỏ nhất.
     
     . Tiếp tục lượt hai, lấy phần tử thứ hai so sánh với các phần tử tiếp theo, nếu nó lớn hơn thì đổi chỗ giá trị của phần tử thứ hai với phần tử đang so sánh.
     
     . Việc này được tiến hành cho đến khi ra gặp phần tử cuối cùng.
     
     . Cải tiến: ở một lượt i nào đó, thay vì đổi chỗ liên tục phần tử thứ i với phần tử có giá trị nhỏ hơn, thì ra chỉ thực hiện việc đổi chỗ phần tử nhỏ nhất ở lượt i với phần tử thứ i.
    
   * Sắp xếp mảng
