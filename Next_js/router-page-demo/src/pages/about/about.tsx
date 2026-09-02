import { GetServerSideProps } from "next";

interface AboutPageProps{
    name:string|null;
    age:string|null;
}

export const getServerSideProps:GetServerSideProps=async(context)=>{
    const {query}=context;

    return{
        props:{
            name:query.name||null,age:query.age||null,
        },
    };
};

const AboutPage =({name,age}:AboutPageProps)=>{
    return(
         <div>
      This is About Page
      <br />
      Name: {name}
      <br />
      Age: {age}
    </div>
    )
};
export default AboutPage;