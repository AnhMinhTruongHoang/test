// bai 1
let x=5
let y=1
let z=2


function tinhGiaTriBieuThuc(x, y, z) {
    x= parseFloat(x);
    y= parseFloat(y);
    z= parseFloat(z);
    let ketqua =0;
    
    
    ketqua = 3 * Math.pow(x, 4) - 5 * x * y + 6 * z * Math.pow(y, 2) - 7 / 2 * Math.pow(z, 4);
    return ketqua;

}
  console.log (tinhGiaTriBieuThuc(x,y,z));
  //2
let W = 80
let H = 1.7

function BMI (chieuCao, canNang) {
    let BMI = canNang / (chieuCao * chieuCao)
    if (BMI < 17) {
      console.log("Nguoi Nay Bi Om")
    } else if (BMI >= 17 && BMI <= 25) {
      console.log("Nguoi Nay Binh Thuong")
    } else {
      console.log("Nguoi Nay Thua Can")
    }
  }
  //a BMI cua Nguyen Van A
  BMI("Chieu cao la: %s m, Can Nang la: %s kg",1.7, 80)
  //b BMI C cua Nguyen Van B
  BMI("Chieu cao la: %s m, Can Nang la: %s kg",1.65, 63)

//3a
function giaiPhuongTrinhBac2(a, b, c) {
    if (a === 0 && b === 0) {
      console.log("Phương trình vô Nghiệm.");
    } else if (a === 0) {
      let x = -c / b;
      console.log(`Phương trình có nghiệm x = ${x}`);
    } else {
      let delta = b * b - 4 * a * c;
      // Kiểm tra giá trị của delta
      if (delta < 0) {
        console.log("Phương trình vô Nghiệm.");
      } else if (delta === 0) {
        let x = -b / (2 * a);
        console.log(`Phương trình có nghiệm kép x = ${x}`);
      } else {
        let x1 = (-b + Math.sqrt(delta)) / (2 * a);
        let x2 = (-b - Math.sqrt(delta)) / (2 * a);
        console.log(
          `Phương trình có hai nghiệm phân biệt: x1 = ${x1}, x2 = ${x2}`
        );
      }
    }
  }
  
  giaiPhuongTrinhBac2(1, 1, 1);
  giaiPhuongTrinhBac2(1, -5, 6);
  //4
  let arr=[5, 1, -2, 8, 10]
let len= arr.length;

// xep cac mang sau thep thu tu giam dan
function sort(){

    let tam=0;
    for(let i=0;i<len-1;i++){
        for(let j=i;j<len;j++){
            if (arr[i]<arr[j]){
                tam=arr[i]
                arr[i]=arr[j];
                arr[j]=tam;
            }

        }
    }
    return arr;
    console.log(arr)

}
// cap so co tong bang 6
function Find(arr){
    for(let i=0;i<len-1;i++){
        for(let j=i+1;j<len;j++)
            if (arr[i]+arr[j]===6)
                console.log([arr[i],arr[j]]);
    }

}


arr= sort(arr);
console.log(arr);

// arr[0] la phan tu lon nhat , arr[len-2] la phan tu be thu 2 trong mang
let doLech= arr[0]- arr[len-2];

console.log(`Do lech cua mang: arr[${0}]- arr[${len-2}] =  ${doLech}`)

Find(arr);
