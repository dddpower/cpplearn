// 포인터 타입간의 타입캐스트는 reinterpret_cast가 정석이지만
// 상속관계의 타입간 포인터 캐스트는 static_cast로도 가능하다.

//upcasting : derived를 base로 캐스팅 : 안전
//downcasting : base를 derived로 캐스팅 : 런타임 에러 가능

//static_cast : 잘못된 downcasting을 조사할 수 없음
//dynamic_cast : 잘못된 downcasting을 실행하면 0을 반환. 런타임 오버헤드 존재
class Animal {

}
