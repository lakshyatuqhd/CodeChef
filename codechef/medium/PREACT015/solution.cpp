function UserProfile(props) {
  return (
    <div>
      <h3>User Profile:</h3>
      <p>Name: {props.name}</p>
      <p>Age: {props.age}</p>
    </div>
  );
}

function App() {
  return (
    <div>
      <UserProfile name="Alice" age={25} />  
      <UserProfile name="Bob" age={30} />  
    </div>
  );
}

export default App;