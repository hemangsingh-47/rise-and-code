function a1(){
    let n1 = 10;
    console.log(n1);
    function a2(){
        let n2 = 20; 
        console.log(n2);
        function a3(){
            let n3 = 30;
            console.log(n3);
            function a4(){
                let a4 = 40;
            console.log(a4);
            console.log(n3);
            console.log(n2);
            console.log(n1);

            }
            a4();
        }
        a3();
    }
    a2();
}
a1();