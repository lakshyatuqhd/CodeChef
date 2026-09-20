                <h1>React Lazy Loading + Suspense</h1>
            <header>
        <div className="app">
    return (

    const [slowNetwork, setSlowNetwork] = useState(false)
    const location = useLocation()
export default function App() {

    )
}
        <div className="center">
            <div className="spinner" />
            <p>Loading...</p>
        </div>
const ProductDetails = lazy(() => import('./pages/ProductDetails.jsx'))

function LoadingSpinner() {
    return (

// Lazy imports (code-splitting)
const Home = lazy(() => import('./pages/Home.jsx'))
const About = lazy(() => import('./pages/About.jsx'))
const Dashboard = lazy(() => import('./pages/Dashboard.jsx'))
import { Suspense, lazy, useState } from 'react'
import { Link, Route, Routes, useLocation } from 'react-router-dom'