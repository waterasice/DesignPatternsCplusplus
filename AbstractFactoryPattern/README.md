# 结构
- Factory（抽象工厂）：声明一个用于创建抽象产品的接口
- ConcreteFactory（具体工厂）：用于创建具体的产品
- Product（抽象产品）：声明一个产品对象类型的接口
- ConcreteProduct（具体产品）：由具体工厂创建的具体产品
# 优缺点
## 优点：

封装了产品的创建，使得不需要知道具体是哪种产品，只需要知道是哪个工厂即可。
可以支持不同类型的产品，使得模式灵活性更强。
可以非常方便的使用一族中的不同类型的产品。

## 缺点：

结构过于臃肿，如果产品类型较多或产品族较多，会非常难于管理。
每次如果添加一组产品，那么所有的工厂类都必须添加一个方法，这样违背了开放-封闭原则。所以一般适用于产品组合产品族变化不大的情况。
# 适用场景
在不必指定产品的具体的情况下，创建多个产品族中的产品对象。

