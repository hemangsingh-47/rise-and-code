type Product = {
  id: number;
  title: string;
  description: string;
  price: number;
  category: string;
  thumbnail: string;
};

type Props = {
  params: Promise<{
    slug?: string[];
  }>;
};

export default function ProductsPage({ params }: Props) {
  return params.then(({ slug }) => {

    // 1. /products
    if (!slug) {
      return fetch("https://dummyjson.com/products")
        .then((response) => response.json())
        .then((data) => (
          <div>
            <h1>All Products</h1>

            {data.products.map((product: Product) => (
              <div key={product.id}>
                <img
                  src={product.thumbnail}
                  alt={product.title}
                  width="150"
                />

                <h3>{product.title}</h3>
                <p>${product.price}</p>
              </div>
            ))}
          </div>
        ));
    }

    // 2. /products/category
    if (slug.length === 1) {
      const category = slug[0];

      return fetch(
        `https://dummyjson.com/products/category/${category}`
      )
        .then((response) => response.json())
        .then((data) => (
          <div>
            <h1>{category} Products</h1>

            {data.products.map((product: Product) => (
              <div key={product.id}>
                <img
                  src={product.thumbnail}
                  alt={product.title}
                  width="150"
                />

                <h3>{product.title}</h3>
                <p>${product.price}</p>
              </div>
            ))}
          </div>
        ));
    }

    // 3. /products/category/productId
    if (slug.length === 2) {
      const productId = slug[1];

      return fetch(
        `https://dummyjson.com/products/${productId}`
      )
        .then((response) => response.json())
        .then((product: Product) => (
          <div>
            <h1>{product.title}</h1>

            <img
              src={product.thumbnail}
              alt={product.title}
              width="300"
            />

            <p>{product.description}</p>
            <h2>${product.price}</h2>
          </div>
        ));
    }

    return <h1>Page Not Found</h1>;
  });
}