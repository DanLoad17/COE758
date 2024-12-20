--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:33:28 09/09/2023
-- Design Name:   
-- Module Name:   C:/Users/goran/Desktop/F2023/COE758/Labs/Tutorial1/Tutorial1/Tutorial1TestBench.vhd
-- Project Name:  Tutorial1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Tutorial1
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Tutorial1TestBench IS
END Tutorial1TestBench;
 
ARCHITECTURE behavior OF Tutorial1TestBench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Tutorial1
    PORT(
         clk : IN  std_logic;
         led : OUT  std_logic_vector(7 downto 0);
         switches : IN  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal switches : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal led : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Tutorial1 PORT MAP (
          clk => clk,
          led => led,
          switches => switches
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
stim_proc: process
begin
-- hold reset state for 100 ns.
wait for 100 ns;
switches<= "1100";
wait for clk_period;
switches<= "1010";
wait for 30 ns;
switches<= "0011";
wait for clk_period;
switches<= "0101";
-- insert stimulus here
wait;
end process;
END;

