//
//  GameScene.m
//  Gomoku 2.0
//
//  Created by Joshua on 3/23/16.
//  Copyright (c) 2016 joshuacnf. All rights reserved.
//

#import "GameScene.h"
#import "AI.h"
//#import "AI0.h"

//AI0 Inaho;
AI Shiro;

@implementation GameScene{
    CGSize scrSize;
    SKSpriteNode *chessboard;
    CGPoint origin;
}

-(void)didMoveToView:(SKView *)view
{
    scrSize = self.frame.size;
    chessboard = [SKSpriteNode spriteNodeWithImageNamed: @"Chessboard"];
    chessboard.position = CGPointMake(scrSize.width / 2.0 - chessboard.frame.size.width / 2.0,
                                      scrSize.height / 2.0 - chessboard.frame.size.height / 2.0);
    chessboard.anchorPoint = CGPointMake(0, 0);
    [self addChild: chessboard];
    
    origin = CGPointMake(31, 31);
}

-(void)mouseDown:(NSEvent *)theEvent
{
    CGPoint touch_loc = [theEvent locationInNode: chessboard];
    
    touch_loc = CGPointMake((touch_loc.x - origin.x) / 49.0, (touch_loc.y - origin.y) / 49.0);
    int x = (int)(touch_loc.x + 0.5),y = (int)(touch_loc.y + 0.5);
    //if(AI.chessboard[x][y]) return;
    
    SKSpriteNode *white = [SKSpriteNode spriteNodeWithImageNamed: @"White"];
    white.position = CGPointMake(x * 49 + origin.x, y * 49 + origin.y);
    [chessboard addChild: white];
}

-(void)mouseUp:(NSEvent *)theEvent
{
    CGPoint touch_loc = [theEvent locationInNode: chessboard];
    
    touch_loc = CGPointMake((touch_loc.x - origin.x) / 49.0, (touch_loc.y - origin.y) / 49.0);
    int x = (int)(touch_loc.x + 0.5), y = (int)(touch_loc.y + 0.5);
    
    Shiro.play(x, y);
    CGPoint black_loc = CGPointMake(x * 49 + origin.x, y * 49 + origin.y);
    SKSpriteNode *black = [SKSpriteNode spriteNodeWithImageNamed: @"Black"];
    black.position = black_loc;
    [chessboard addChild: black];
}

-(void)update:(CFTimeInterval)currentTime
{
    /* Called before each frame is rendered */
}
@end
