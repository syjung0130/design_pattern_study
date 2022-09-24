## factory method pattern
 - factory method는 말 그대로 객체를 생성하는 부분을 캡슐화한 패턴이다.
 - 예제에서는 팩토리메서드 패턴 내에서 IPerson인터페이스를 상속받은 Villeager, CityPerson을 이용해서 객체를 생성한다.
 - 실제 객체의 생성부분을 추상화했다고 볼 수 잇다.
 
## abstract factory pattern
 - 객체를 생성하는 factory 클래스를 추상화하는 패턴이다.  
 - factory method 패턴의 메서드에서 if문 또는 switch문으로 분기해서 객체를 생성하는데,  
 factory method패턴은 추상클래스를 상속받은 구체적인 factor method패턴에서 하나의 객체에 대한 생성만을 전담함으로 인해  
 코드가 한결 깔끔해진다는 장점이 있다.  
  


### 참고
자세한 설명은 Wikipedia의 내용을 참고하자.  
여기서는 내가 실제 구현을 하면서 알게된 것들을 메모하는 걸로..  
https://en.wikipedia.org/wiki/Factory_method_pattern
  
  
## 그 외의 부수적인 지식들..
#### Composition vs Aggregation
https://ttottoro.tistory.com/477
  
Composition, Aggregation은 모두 상속관계이다.  
Composition은 'is A'의 관계로, 전체와 부분이 강력한 연관관계를 맺으며 전체와 부분이 같은 생명 주기를 갖는다.  
(Car와 Engine의 관계처럼)  
Aggregation은 전체와 부분의 연관관계를 맺지만, 동일한 생명주기를 갖지는 않는다.
(Phone과 Address의 관계처럼)  
