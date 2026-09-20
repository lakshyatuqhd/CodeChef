        profileActionText={profileActionText}
        userBio={userBio}
      <CardWrapper
        userName={userName}
      {/* Passes props down */}
      <h2>User Section</h2>
    <div className="main-content">
  return (
function MainContentArea({ userName, userBio, profileActionText }) {
// 2. Intermediate Layout Component (Doesn't use the props)

}
  );
    />
      profileActionText={userData.actionText}
      userBio={userData.bio}
    name: 'Alice Wonderland',
    bio: 'Curious explorer of digital rabbit holes.',
    actionText: 'View Profile',
  };

  // Prop Drilling starts here
  return (
    <MainContentArea
      userName={userData.name}
function UserProfilePage() {
  const userData = {
import './App.css'; // Make sure styles.css is in the same folder

// 1. Top-level Page Component (Holds the data)