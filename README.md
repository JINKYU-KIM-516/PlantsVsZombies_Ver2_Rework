# PlantsVsZombies_Ver2_Rework
컴포넌트 방식을 적용시켜 새로 만든 "식물 대 좀비" 게임입니다.

중간에 한 번 말아먹고 아예 새로 다시 만들어서 Rework가 붙게 되었습니다.

## 2025.8.4
### 추가사항
프로젝트 생성
bmp 리소스 파일 추가

## 2025.8.6
### 추가사항
png 리소스 파일 추가

## 2025.8.7
### 추가사항
MainGame 추가 : main 클래스</br>
ㄴmain에서 실행시키면 게임이 진행되게 해주는 클래스

ImageComponent 추가 : bmp 파일 출력</br>
ㄴ화면에 bmp파일이 출력되게 해주는 Component

ImageResourceManager 추가 : LoadImage 관련 메모리 관리 매니저</br>
ㄴImageComponent에서 LoadImage를 할 때, 처음 LoadImage하는 HBITMAP라면 map에 저장해두고,</br>
ㄴ이미 LoadImage했던 HBITMAP라면 map에 저장해뒀던 것을 꺼내서 반환해줌

RenderManager 추가 : ImageComponent 출력 매니저</br>
ㄴImageComponent들을 vector에 저장하고, 차례대로 Draw를 실행시킴</br>
ㄴImageComponent에 깊이(m_depth)가 있어서 깊이를 기준으로 vector를 정렬하면 원하는 순서대로 출력 가능

### 현재까지 존재 버그&문제점
내 생각엔 이론상 완벽한데 화면에 아무것도 출력되지 않음;

## 2025.8.11
### 해결된 버그&문제점
화면에 아무것도 출력되지 않던 문제 해결 - test()가 호출되지 않고 있었음

### 추가사항
Tile 추가 : 식물이 생성될 타일</br>
ㄴ특별한 역할 없이 이미지만 출력

GameBoardManager 추가 : Tile 관리 매니저</br>
ㄴ매니저 생성 시 Tile을 게임보드 크기만큼 생성

MoveComponent 추가 : 방향과 속도 지정해주면 그 쪽으로 Point를 이동시킴

Zombie 추가 : 식물을 공격하고 게임보드의 최좌측에 닿을 시 게임 오버 시킴</br>
ㄴ아직 Image, Move만 함, 미완성 상태

GameObjectManager 추가 : GameObject들을 가지고 있고 그 GameObject들을 Update해줌</br>
ㄴ여기서 Tile, Zombie 생성을 모두 담당 중임

## 2025.8.12
### 추가사항
Zombie 랜덤 스폰 추가 : 5초마다 Zombie가 무작위 행에 생성됨</br>
ㄴGameObjectManager가 실행

HealthPointComponent 추가 : 체력(HP)으로, 0 이하가 될 시 해당 개체 사망 처리

Zombie에 HealthPointComponent 추가</br>
ㄴ이후 Attack 추가 예정
