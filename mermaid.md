<!--
 파일: mermaid.md
 역할: GeoJSON 예제를 포함한 마크다운 파일(지도/도형 예시)
 배경지식: GeoJSON은 지리공간 데이터를 표현하는 표준 형식입니다. 이 파일은 폴리곤 예시를 보여줍니다.
 초심자 설명: 아래의 JSON 블록은 좌표 배열로 폴리곤(사각형)을 정의합니다.
-->

```geojson
{
  "type": "FeatureCollection",
  "features": [
    {
      "type": "Feature",
      "id": 1,
      "properties": {
        "ID": 0
      },
      "geometry": {
        "type": "Polygon",
        "coordinates": [
          [
              [-90,35],
              [-90,30],
              [-85,30],
              [-85,35],
              [-90,35]
          ]
        ]
      }
    }
  ]
}
```