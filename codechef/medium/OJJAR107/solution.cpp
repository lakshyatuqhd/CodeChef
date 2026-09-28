  const [isOn, setIsOn] = useState(false);

  useEffect(() => {
    const handleKeyPress = (e) => {
      if (e.code === 'KeyL') {
        // 🚨 Problem: Uses STALE isOn value!
        setIsOn(!isOn);
      }
    };
    
    window.addEventListener('keydown', handleKeyPress);
    return () => window.removeEventListener('keydown', handleKeyPress);
  }, [isOn]); // Empty dependency array

  return (
    <div>
      <button onClick={() => setIsOn(!isOn)}>
        Toggle Light (Button)
      </button>
      <p>Light is {isOn ? "ON 🌟" : "OFF 🌑"}</p>
      <small>Press "L" key to toggle!</small>
    </div>
  );
}

export default LightSwitch;