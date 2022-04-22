﻿#pragma once

#include "Audio.h"
#include "DebugText.h"
#include "DirectXCommon.h"
#include "Input.h"
#include "Model.h"
#include "SafeDelete.h"
#include "Sprite.h"
#include "ViewProjection.h"
#include "WorldTransform.h"
#include <DirectXMath.h>

/// <summary>
/// ゲームシーン
/// </summary>
class GameScene {

  public: // メンバ関数
	/// <summary>
	/// コンストクラタ
	/// </summary>
	GameScene();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~GameScene();

	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize();

	/// <summary>
	/// 毎フレーム処理
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

public:
	//パーツID
	enum PartId {
		Root, //大元
		Spine, //脊髄
		Chest, //胸
		Head, //頭
		ArmL, //左腕
		ArmR, //右腕
		Hip, //尻
		LegL, //左足
		LegR, //右足
	};



  private: // メンバ変数
	DirectXCommon* dxCommon_ = nullptr;
	Input* input_ = nullptr;
	Audio* audio_ = nullptr;
	DebugText* debugText_ = nullptr;
	//テクスチャハンドル
	uint32_t textureHandle_ = 0;
	//スプライトの生成
	Sprite* sprite_ = nullptr;
	// 3Dモデル
	Model* model_ = nullptr;
	//サウンドデータハンドル
	uint32_t soundDataHandle_ = 0;
	//音声再生ハンドル
	uint32_t voiceHanldle_ = 0;
	//値を表示したい変数
	int32_t valute_ = 0;
	//カメラ上方向の角度
	float viewAngle = 0.0f;
	//テクスチャハンドル

	/// <summary>
	/// ゲームシーン用
	/// </summary>
	//ワールドトランスフォーム
	WorldTransform worldTransform_[100];

	//ビュープロテクション
	ViewProjection viewProjection_;
};
