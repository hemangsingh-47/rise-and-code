type AboutPageProps = {
  searchParams: Promise<{
    name: string;
    age: number;
  }>;
};

const AboutPage = async ({ searchParams }: AboutPageProps) => {
  const { name, age } = await searchParams;

  return (
    <div>
      This is About page {name} {age}
    </div>
  );
};

export default AboutPage;