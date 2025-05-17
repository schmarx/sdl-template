#pragma once

typedef struct {
	float x;
	float y;
} vec2;

typedef struct {
	float x;
	float y;
	float z;
} vec3;

float vec2_dot(vec2 v1, vec2 v2);
float vec2_mag(vec2 v);
vec2 vec2_mul(vec2 v, float c);
vec2 vec2_add(vec2 v1, vec2 v2);
vec2 vec2_sub(vec2 v1, vec2 v2);
vec2 vec2_proj(vec2 v1, vec2 v2);

float vec3_dot(vec3 v1, vec3 v2);
float vec3_mag(vec3 v);
vec3 vec3_mul(vec3 v, float c);
vec3 vec3_add(vec3 v1, vec3 v2);
vec3 vec3_sub(vec3 v1, vec3 v2);
vec3 vec3_cross(vec3 v1, vec3 v2);
vec3 vec3_proj(vec3 v1, vec3 v2);