//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by 佐藤 友信 on 2013/07/10.
//  Copyright (c) 2013年 Tomonobu Sato. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController <UITextFieldDelegate>

- (IBAction)changeGreeting:(id)sender;

@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;

@property (copy, nonatomic) NSString *userName;

@end
