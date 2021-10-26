#include <memory>
#include "ConcreteBuilder.h"
#include "Director.h"

int main() {
    std::shared_ptr<Builder> builder = std::make_shared<ConcreteBuilder>();
    Director director(builder);
    director.makeProduct(1,2,3,4);
    std::unique_ptr<Product> product = builder->getProduct();
    product->printMe();
}
