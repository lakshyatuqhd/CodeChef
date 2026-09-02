      <img src={avatarUrl} alt={`name's avatar`} style={avatarStyle} />
      <h2 style={headingStyle}>{name}</h2>
      <p>{bio}</p>
    </div>
  );
};

const App = () => {
  const avatarUrl = "https://cdn.codechef.com/images/problems/PREACT018/a29545c678c75e59bc684868407b1d13.webp";
  const name = "John Doe";
  const bio = "Frontend Developer | React Enthusiast | Codechef User";
  return (
    <div>
      <h1 style={{ textAlign: "center", fontFamily: "Arial, sans-serif" }}>
        Profile Card
      </h1>

      <ProfileCard
        name = {name}
        bio = {bio}
        avatarUrl={avatarUrl}
      />
    </div>
  );
};

export default App;
