#include "vec.h"

// -------------------------------------------
// ----- 2-dimensional vector operations -----
// -------------------------------------------

float vec2_dot(vec2 v1, vec2 v2) {
	return v1.x * v2.x + v1.y * v2.y;
}

float vec2_mag(vec2 v) {
	return vec2_dot(v, v);
}

vec2 vec2_mul(vec2 v, float c) {
	vec2 result = {c * v.x, c * v.y};
	return result;
}

vec2 vec2_add(vec2 v1, vec2 v2) {
	vec2 result = {v1.x + v2.x, v1.y + v2.y};
	return result;
}

vec2 vec2_sub(vec2 v1, vec2 v2) {
	vec2 result = {v1.x - v2.x, v1.y - v2.y};
	return result;
}

// project v1 onto v2
vec2 vec2_proj(vec2 v1, vec2 v2) {
	return vec2_mul(v2, vec2_dot(v1, v2) / vec2_dot(v2, v2));
}

// -------------------------------------------
// ----- 3-dimensional vector operations -----
// -------------------------------------------

float vec3_dot(vec3 v1, vec3 v2) {
	return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

float vec3_mag(vec3 v) {
	return vec3_dot(v, v);
}

vec3 vec3_mul(vec3 v, float c) {
	vec3 result = {c * v.x, c * v.y, c * v.z};
	return result;
}

vec3 vec3_add(vec3 v1, vec3 v2) {
	vec3 result = {v1.x + v2.x, v1.y + v2.y, v1.z + v2.z};
	return result;
}

vec3 vec3_sub(vec3 v1, vec3 v2) {
	vec3 result = {v1.x - v2.x, v1.y - v2.y, v1.z - v2.z};
	return result;
}

vec3 vec3_cross(vec3 v1, vec3 v2) {
	vec3 result = {
		v1.y * v2.z - v1.z * v2.y,
		v1.z * v2.x - v1.x * v2.z,
		v1.x * v2.y - v1.y * v2.x};

	return result;
}

// project v1 onto v2
vec3 vec3_proj(vec3 v1, vec3 v2) {
	return vec3_mul(v2, vec3_dot(v1, v2) / vec3_dot(v2, v2));
}