                    />
                    Simulate slow network
                </label>
            </header>

            {/* 🚫 Suspense removed */}
            <Routes location={location}>
                <Route path="/" element={<Home slow={slowNetwork} />} />
                <Route path="about" element={<About />} />
                <Route path="dashboard" element={<Dashboard slow={slowNetwork} />} />
                <Route path="product/:id" element={<ProductDetails slow={slowNetwork} />} />
                <Route path="*" element={<p className="center">Not Found</p>} />
            </Routes>
        </div>
    )
}
