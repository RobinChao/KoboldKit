//
//  MyScene.h
//  KoboldKitDemo
//

//  Copyright (c) 2013 Steffen Itterheim. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import "KoboldKit.h"

@class MyLabelNode;

@interface MyScene : KKScene
{
	SKNode* _playerCharacter;
	CGPoint _currentControlPadDirection;
	KKTilemapNode* _tilemapNode;
	
	CGFloat _jumpForce;
	CGFloat _dpadForce;
}

@end
