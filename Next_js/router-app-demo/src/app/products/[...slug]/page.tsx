import { notFound } from "next/navigation";

type ProductPageProps={
    params:Promise<{
        slug:string[];
    }>;
};

const ProductPage=async({params}:ProductPageProps)=>{
    const paramsValues=await params

    if(!paramsValues?.slug)return(
        <div>this is not params page</div>
    )
    const [category,subCategory,brand,products,productId]=paramsValues.slug

    if(paramsValues.slug.length>5)return notFound()


console.log(paramsValues)
    if(category && subCategory&&brand&&products&&productId) 
        return(
    <div>This is product details page {productId}</div>
    )

      if(category && subCategory&&brand&&products) 
        return(
    <div>This is product details page {products}</div>
    )

      if(category && subCategory&&brand) 
        return(
    <div>This is product details page {brand}</div>
    )

      if(category && subCategory) 
        return(
    <div>This is product details page {subCategory}</div>
    )


    return(
        <div>
            <h1>category page : {category}</h1>
        </div>
    )
}
export default ProductPage;