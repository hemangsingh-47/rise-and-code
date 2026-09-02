import { useRouter } from "next/router";

export default function ProductPage() {
  const router = useRouter();

  const { id } = router.query;

  console.log(id);

  return (
    <div>
      Product ID: {id}
    </div>
  );
}