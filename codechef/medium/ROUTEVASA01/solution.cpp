function Home() {
  return (
    <>
      <style>
        {`
          .home {
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
          }
        `}
      </style>
      <div className="home">
        <div>
          <h1>Welcome to FunFlix 🍿</h1>
          <p>Your gateway to unlimited fun!</p>
        </div>
      </div>
    </>
  )
}
export default Home