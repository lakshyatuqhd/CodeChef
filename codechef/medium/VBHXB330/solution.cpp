import AuthForm from '../components/AuthForm'; // Import the reusable AuthForm

const Register = () => {
    return (
        // Render the AuthForm component here, passing the 'type' prop for registration
        <AuthForm type="register" />
    );
};

export default Register;
