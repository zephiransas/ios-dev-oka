//
//  SecondViewController.h
//  HelloWorld
//
//  Created by 貴文 吉田 on 12/04/21.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SecondViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (strong,nonatomic) NSString *name;
- (IBAction)closeButton:(id)sender;

@end
